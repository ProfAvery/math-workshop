#include <iostream>

using namespace std;

int main()
{
  cout << "hello, " << "world" << endl;

  ((cout << "hello, ") << "again") << endl;

  // cout << ("goodbye, " << ("program" << endl));
}
