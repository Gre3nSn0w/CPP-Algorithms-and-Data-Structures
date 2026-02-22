#include <iostream>
using namespace std;

int main()
{	
    int par=0;
    int impar=0;
    int numeros [10];
    int pares [10];
    int impares[ 10];
    
    
    for (int i=0; i<10; i++)
    { 
        cout<<"Dame el num "<< i+1 << ": " ;
        cin >> numeros[i];

        if (numeros[i] % 2 == 0)
            pares[par++] = numeros[i];
        else
            impares[impar++] = numeros[i];
    }
 
    cout<<" "<<endl;
    cout<< "Los numeros pares son: ";
    for (int i = 0; i < par; i++)
        cout << pares[i] << " ";
        cout<<endl;
 
    cout << "Los numeros impares son: ";
    for (int i = 0; i < impar; i++)
        cout << impares[i] << " ";
 
    cout << endl;
	
	return 0;
	
}
