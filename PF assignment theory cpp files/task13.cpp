#include <iostream>
using namespace std;
int main() 
{
    int mod;
    cout << "Enter your TV model (100 or 200 or 300): "<< endl;
    cin >> mod;

    if (mod == 300)
        cout << "Features:\nPicture-in-picture\nStereo sound\nRemote control";
    else if (mod == 200)
        cout << "Features:\nStereo sound\nRemote control";
    else if (mod == 100)
        cout << "Features:\nRemote control only";
    else
        cout << "Invalid model";

    return 0;
}
