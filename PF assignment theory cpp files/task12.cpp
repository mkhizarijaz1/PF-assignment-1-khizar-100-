#include <iostream>
using namespace std;

int main() {
    double income;
    int years;

    cout << "Enter your income: ";
    cin >> income;
    cout << "Enter years of employment: ";
    cin >> years;

    if (income >= 35000 && years > 5)
        cout << "Your are Qualified for loan";
    else
        cout << "SORRY! Your are Not qualified";

    return 0;
}
