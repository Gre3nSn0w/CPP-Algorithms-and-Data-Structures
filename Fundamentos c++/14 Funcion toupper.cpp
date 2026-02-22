// FuncionToupper.cpp 

#include <iostream>
#include <ctype.h>
using namespace std;


int main()
{
	char Letra;

	cout << "Teclea una letra a convertir en mayuscula: " ;
	cin >> Letra;
	
    cout << " " << endl ;
	cout << "La conversion es: " << (char)toupper(Letra) 
		 << endl << endl;
	
	system("pause");
	
	return 0;
}

