#include <iostream>
#include <math.h>
using namespace std;

void pedirCords(double *x1, double *y1)
{
	cout<<"Ingresa la coordenada x: ";
	cin>>*x1;
	
	cout<<"Ingresa la coordenada y: ";
	cin>>*y1;
}

void calcang(double *calc, double *y1, double *x1)
{
    *calc=atan(*y1 / *x1);
}

void imprimir(double *calc)
{
	cout<<endl;
	cout<<"El angulo es: "<<*calc<<" radianes."<<endl;
}


int main()
{
  double corX=0;
  double corY=0;
  double angulo=0;
  	
  pedirCords(&corX, &corY);	
  calcang(&angulo, &corY, &corX);
  imprimir(&angulo);
  
  return 0;
}
