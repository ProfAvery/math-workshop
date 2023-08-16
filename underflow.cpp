#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  cout << "Without logs:" << endl;
  double x_ok = pow(0.1, 323);
  cout << "0.1^323 = " << x_ok << endl;
  double x_underflow = x_ok / 10.0;
  double x_not_ok = 10.0 * x_underflow;
  cout << "(10.0 * 0.1^323) / 10.0 = " << x_not_ok << "\n" << endl;

  cout << "With logs:" << endl;
  double y_ok = 323 * log(0.1);
  cout << "0.1^323 = " << exp(y_ok) << endl;
  double y_underflow = y_ok - log(10.0);
  double y_actually_ok = log(10.0) + y_underflow;
  cout << "(10.0 * 0.1^323) / 10.0 = " << exp(y_actually_ok) << "\n" << endl;

  cout << "y_underflow is only " << y_underflow << endl;
}
