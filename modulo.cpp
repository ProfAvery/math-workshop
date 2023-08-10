#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int count = 10;
    int n = 3;

    switch (argc) {
        case 1:
            break;
        case 2:
            count = stoi(argv[1]);
            break;
        case 3:
            count = stoi(argv[1]);
            n = stoi(argv[2]);
            break;
        default:
            cout << "Usage: " << argv[0] << " [COUNT] [N]" << endl;
            return 1;
            break;
    }

    for (int i = 0; i < count; i++) {
        cout << i << " % " << n << " = " << i % n << endl;
    }
}
