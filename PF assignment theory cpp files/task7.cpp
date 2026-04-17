#include <iostream>
using namespace std;

int main() {
    int r1, r2, r3;
    cout << "Enter time of runner 1: ";
    cin >> r1 ;
cout << "Enter time of runner 2: ";
    cin >> r2 ;
    cout << "Enter time of runner 3: ";
    cin >> r3 ;
    if (r1 < r2 && r1 < r3){
	
        cout << "1st: Runner 1\n";
        	if (r2< r3){
			
        cout << "2nd : Runner 2 \n3rd : Runner 3\n";}
        	else 
         cout << "2nd : Runner 3 \n3rd : Runner 2\n";}
    else if (r2 < r1 && r2 < r3){
	
        cout << "1st: Runner2\n";
        	if (r1< r3)
        cout << "2nd : Runner 1 \n3rd : Runner 3\n";
        else 
         cout << "2nd : Runner 3 \n3rd : Runner 1\n";}
    else if (r3 < r1 && r3 < r2){
	
        cout << "1st: Runner3\n";
        if (r2 < r1)
cout << "2nd : Runner 2 \n3rd : Runner 1\n";
        	else 
         cout << "2nd : Runner 1 \n3rd : Runner 2\n";}
         
    
    return 0;
}
