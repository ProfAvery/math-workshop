#include <iostream>

using namespace std;

int main()
{
  int x, y, z;

  x = y = z = 1;
  cout << x << ", " << y << ", " << z << endl;

  x = (y = (z = 2));
  cout << x << ", " << y << ", " << z << endl;

  ((x = y) = z) = 3;
  cout << x << ", " << y << ", " << z << endl;
}
