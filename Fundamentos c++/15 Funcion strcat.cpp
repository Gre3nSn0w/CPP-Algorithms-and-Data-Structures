// FuncionStrcat.cpp 
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char cadena1[20];
	char cadena2[10];
	
	cout << "Dame cadena uno: " ;
	cin.getline(cadena1,20); 

	strcat (cadena1,  " " );

	cout << "Dame cadena dos: " ;
	cin.getline(cadena2,10);

	strcat(cadena1,cadena2);

	cout << endl;

	cout<<"El resultado es: " << cadena1 << endl << endl;
	
	system("pause");
	
	return 0;
}

