// FuncionIsalpha.cpp : Defines the entry point for the console application.

#include <iostream>
#include <ctype.h>
#include <conio.h>
using namespace std;

int main()
{
	char Letra;
	char Respuesta = 0;
	char Conver;

	cout << "Teclea una letra: " ;
	cin >> Letra;

	Conver = char(Letra); 

	Respuesta = isalpha(Letra); 

	if(Respuesta)
	{
		cout << endl;
		cout << Letra << " -> tecleaste un caracter. " << endl << endl;
	}

	if(Respuesta == 0)
	{
		cout << endl;
		cout << Letra 
			 << " -> tecleaste otro tipo de dato, debe ser una letra." 
			 << endl << endl;
	}

		
	return 0;
}

