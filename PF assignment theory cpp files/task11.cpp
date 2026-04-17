#include <iostream>
using namespace std;
int main()
{
	int sales ;
	cout << "Enter your sales amount :";
	cin >> sales ;
	
		if (sales>50000)
	 
	 {
	 
    		sales = sales+(0.25 *sales) + 250;
    		
    		cout << "your final sales amount : " << sales << endl ;

}
 return 0;
}

