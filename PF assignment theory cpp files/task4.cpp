#include <iostream>
using namespace std;

int main() {
    double a = 10;
    double b = 10;

    a = a + 0.2;

    if (a > b)
        cout << "a " << a << "is larger "<< endl<< b << " b is smaller";
    else
        cout << " b " << b << "is larger "<< endl <<a << " a is smaller";
    return 0;
}
