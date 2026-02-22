// Apuntadores4.cpp 
#include <iostream>
#include<string.h>

using namespace std;
int main()
{

 char cadena[50];
 char *cad;
 char *pc;
 
 cout <<"Dame una cadena: ";
 cin.getline(cadena,50);
 
 cad = cadena;
 pc = cad + strlen(cad) -1;
 cout<<endl;
 cout<<"Voy a imprimir la cadena en forma inversa: ";

 while(pc != cad)
  {
    cout << *pc;
    pc--;
  }

 cout << *cad << endl << endl;
 
 system("pause");
 return 0;
}

