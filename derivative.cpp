#include <iostream>
#include <cmath>

using namespace std;

/*
    Based on an example from Stack Overflow:
    https://stackoverflow.com/a/48736472
*/

const double h = 1e-5;

auto derivative = [](auto f)
{
    return [f](double x) {
        return (f(x + h) - f(x)) / h;
    };
};

int main()
{
    auto f = [](double x) { return x * x; };
    auto df = derivative(f);
    auto ddf = derivative(df);

    cout << "x\tf(x)\tf'(x)\tf''(x)" << endl;
    cout << "-\t----\t-----\t------" << endl;

    for (int i = 0; i < 10; i++) {
        cout << i << "\t" << f(i) << "\t"
             << round(df(i)) << "\t" << round(ddf(i)) << endl;
    }
}