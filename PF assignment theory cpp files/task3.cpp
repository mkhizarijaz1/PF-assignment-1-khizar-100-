#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter a numbers: ";
    cin >> a;
    cout << "Enter a numbers: ";
    cin >> b;

    if (a < b)
        cout << "Smaller: " << a << endl << "Larger: " << b;
    else
        cout << "Smaller: " << b << endl << "Larger: " << a;

    return 0;
}
