// ArregloCaracter.cpp 

#include <iostream>
using namespace std;

int main()
{
   char Nombre[30];

   cout << "Dame tu nombre" << endl;
   cin.getline(Nombre,30);

   cout << endl << endl;
   cout << Nombre << endl << endl; 
   cout << Nombre[2] <<Nombre[3]<< endl;

   	
   return 0;
}

