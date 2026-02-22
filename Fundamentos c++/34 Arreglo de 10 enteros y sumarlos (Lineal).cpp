#include <iostream>
using namespace std;
 
int main()
{
	int enteros=10;
    int arreglo[enteros];
    int suma=0;
 
    cout << "Introducir datos:\n";
    for( int i = 0; i < enteros; i++ ) 
	{
        cout << "(" << i + 1 << "/" << enteros << "): ";
        cin >> arreglo[i];
        suma += arreglo[i];
    }
    
    cout<<endl;
    cout << "El arreglo es: ";
    
    for( int i = 0; i < enteros; i++ )
    cout << arreglo[i] << " ";
    cout<<endl<<endl;
    cout << "La suma de los 10 enteros es: " << suma << endl;	
    
    return 0;
}
