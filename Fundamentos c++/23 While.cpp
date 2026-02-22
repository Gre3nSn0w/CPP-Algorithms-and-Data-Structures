 // while
#include <iostream>
using namespace std;

int main()
{
	int Nums[5];
	int NumM=0;
	int k=0;
	int i=0;
	
	while (k<5)
	{
		cout<<"Dame un numero: ";
		cin >> Nums[k];
		k++;
	}
	
    while (i<5)	
    {
    	if(Nums[i] > NumM)
    	{
    		NumM = Nums[i];
		}
	  i++;
	}
    
    cout<<" "<<endl;
	cout<<"El numero mayor es: "<<NumM<<endl<<endl;
	
	return 0;
	
}
