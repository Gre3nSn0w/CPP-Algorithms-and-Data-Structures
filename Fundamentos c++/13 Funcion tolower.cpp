// FuncionTolower.cpp
#include <iostream>
using namespace std;

int main()
{
	char Letra;

	cout << "Teclea una letra a convertir en minuscula: " ;
	cin >> Letra;
	
    cout << " " << endl ;
	cout << "La conversion es: "
		 <<(char)tolower(Letra) 
		 << endl << endl;

	system("pause");
	
	return 0;
}

