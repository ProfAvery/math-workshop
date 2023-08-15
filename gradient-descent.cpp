#include <iostream>
#include <cmath>
#include <random>

using namespace std;

const double h = 1e-5;

auto derivative = [](auto f)
{
    return [f](double x) {
        return (f(x + h) - f(x)) / h;
    };
};

double random_starting_point()
{
    random_device device;
    default_random_engine engine(device());
    uniform_real_distribution<double> random_double(-10, 10);
    return random_double(engine);
}

bool close_enough_to_zero(double x)
{
    return abs(x) < h;
}

auto gradient_descent = [](auto f, double location) {
    auto df = derivative(f);
  
    do {
        double gradient = df(location);
        location -= 0.01 * gradient;
    } while (!close_enough_to_zero(df(location)));

    return location;
};

int main()
{
    auto f = [](double x) { return (x - 1) * (x - 1) + 2; };
  
    double start = random_starting_point();
    cout << "Descending from x = " << start << "..." << endl;
    
    double min = gradient_descent(f, start);
    double y = f(min);

    cout << "The minimum value of f(x) is f(" << round(min) << ") = " << round(y) << endl;
}