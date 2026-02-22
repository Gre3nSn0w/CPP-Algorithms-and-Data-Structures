// ApuntadorFuncion1.cpp 
#include <iostream>
using namespace std;

void Intercambio(float &n1, float &n2)
{
 cout << endl << endl;
 float temp = n1;
 
 n1 = n2;
 n2 = temp;
}

void Imprimir(float &n1, float &n2)
{
 cout << endl << endl;
 cout <<"a= " <<n1 << " " <<"b = "<< n2 << endl << endl << endl;
}


int main()
{
	
 float a = 5.5;
 float b = 7.5;
 
 cout << endl << endl;
 cout <<"a= "<< a << " " <<"b = "<< b << endl << endl;
 
 Intercambio(a,b);
 Imprimir(a,b);
 cout << endl << endl;
 cout <<"a= " <<a << " " <<"b = "<< b << endl << endl << endl;
 
 system("pause");
 return 0;
 
}

