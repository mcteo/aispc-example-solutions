#include <iostream>

using namespace std;

int main() {

    cout << "Enter the diamond width, which must be a positive odd integer: ";

    int size;
    cin >> size;

    // shouldnt really be nessisary as usually you are guarenteed valid input
    if ((size % 2) == 0) {
        printf("Error: Number must be an odd number\n");
        return 1;
    }

    int count, index;
    for (count = 1; count < (size+1); count++) {
        for (index = 0; index < (size-count); index++) {
            cout << " ";
        }
        for (index = 0; index < count; index++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (count = 1; count < size; count++) {
        for (index = 0; index < count; index++) {
            cout << " ";
        }
        for (index = 0; index < (size-count); index++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

