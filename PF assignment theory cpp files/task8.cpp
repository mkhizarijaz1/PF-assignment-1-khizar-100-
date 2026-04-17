#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "1.Circle\n2.Rectangle\n3.Triangle\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Area of CIRCLE : " << 3.14159 * r * r;
    }
    else if (choice == 2) {
        double length, width;
        cout << "Enter length :";
        cin >> length ;
        cout << "Enter width :";
        cin >> width ;
        
        cout << "Area of RECTANGLE : " << length * width;
    }
    else if (choice == 3) {
        double b, h;
        cout << "Enter base : ";
        cin >> b ;
        cout << "Enter heigth : ";
        cin >> h ;
        cout << "Area of TRIANGLE : " << 0.5 * b * h;
    }

    return 0;
}
