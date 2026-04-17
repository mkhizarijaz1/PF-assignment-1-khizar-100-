#include <iostream>
using namespace std;
int main() 
{
    double mass, weight;
    cout << "Enter mass: ";
    cin >> mass;
    weight = mass * 9.8;
    cout << "Weight of the object : " << weight << "\n";

    if (weight > 1000)
    
        cout << "the object is Too heavy\n";
    else if (weight < 10)
	
	cout << "the object is Too light\n";

    return 0;
}
