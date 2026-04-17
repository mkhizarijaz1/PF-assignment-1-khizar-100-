#include <iostream>
using namespace std;

int main() {
    int month, day, year;
    cout << "Enter Month: ";
    cin >> month ;
    cout << "Enter Day: ";
    cin >> day  ;
    cout << "Enter Year: ";
    cin >> year ;
    
    

    if (month  * day == year)
        cout << "MAGIC DATE";
    else
        cout << "NOT MAGIC";

    return 0;
}
