#include <iostream>
#include <string.h>
using namespace std;
int main()

{
     char cadena1[20];
     char cadena2[20];

    cout << "Dame cadena dos: " ;
    cin >> cadena2;

    cout<<endl;
    
    strcpy(cadena1, cadena2); 
    cout << "La copia de cadena2 a cadena1 es: "<< cadena1 << endl << endl;

   return 0;
   
}

