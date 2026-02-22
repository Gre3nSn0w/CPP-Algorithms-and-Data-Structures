#include <iostream>
#include <math.h>
using namespace std;

struct Circulo
{
	float radio;
	float area;	
};

void PedirDatos(Circulo *c)
{
	cout<<"Ingresa el radio: ";
	cin>> c->radio;
}


void Calcular(Circulo *c2)
{
	c2->area = (3.1416)* pow(c2->radio,2);
}


void ImprimirDatos(Circulo *c3)
{
	cout<<endl;
	cout<<"El area es: "<< c3->area <<endl;
}


int main()
{
	Circulo *c1 = new Circulo();
	
  PedirDatos(c1);
  Calcular(c1);
  ImprimirDatos(c1);
  
  delete c1;
  return 0;
}
