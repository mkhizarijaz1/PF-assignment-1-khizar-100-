#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Enter a numbers: ";
    cin >> a;
cout << "Enter a numbers: ";
    cin >> b;
    if (b != 0)
        cout << "Result: " << a/b;
    else
        cout << "Division by zero is not possible.";

    return 0;
}
