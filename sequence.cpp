#include <iostream>

using namespace std;

int closed_form(int n)
{
    return 2 * n;
}

int recurrence_relation(int n)
{
    if (n == 0)
        return 0;
    else
        return recurrence_relation(n - 1) + 2;
}

int main()
{
    cout << "n\tclosed\trecurrent" << endl;
    cout << "-\t------\t---------" << endl;

    for (int i = 0; i < 10; i++) {
        cout << i << "\t" << closed_form(i) << "\t"
             << recurrence_relation(i) << endl;
    }
}