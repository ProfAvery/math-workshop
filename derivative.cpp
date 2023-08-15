#include <iostream>
#include <cmath>

using namespace std;

const double h = 1e-5;

double f (double x) { return x * x; }
double df(double x) { return (f(x + h) - f(x)) / h; }

int main()
{
    cout << "x\tf(x)\tf'(x)" << endl;
    cout << "-\t----\t-----" << endl;

    for (int i = 0; i < 10; i++) {
        cout << i << "\t" << f(i) << "\t"
             << round(df(i)) << endl;
    }
}