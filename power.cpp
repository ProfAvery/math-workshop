#include <iostream>

using namespace std;

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}

int main(int argc, char *argv[])
{
    int x = 2;
    int n = 10;

    switch (argc) {
        case 1:
            break;
        case 2:
            x = stoi(argv[1]);
            break;
        case 3:
            x = stoi(argv[1]);
            n = stoi(argv[2]);
            break;
        default:
            cout << "Usage: " << argv[0] << " [X] [N]" << endl;
            return 1;
            break;
    }

    for (int i = 0; i < n; i++) {
        cout << x<< "^" << i << " = " << power(x, i) << endl;
    }
}