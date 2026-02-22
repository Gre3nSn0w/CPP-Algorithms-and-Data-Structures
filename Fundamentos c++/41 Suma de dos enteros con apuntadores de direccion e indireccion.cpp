#include <iostream>
using namespace std;

void PedirNums(int *num1, int *num2)
{
	cout<<"Ingresa el primer numero: ";
	cin>>*num1;
	
	cout<<"Ingresa el segundo numero: ";
	cin>>*num2;
}


void Suma(int *R1, int *num1, int *num2)
{
	*R1=*num1+*num2;
}

void Imprimir(int *R1)
{
	cout<<endl;
	cout<<"El resultado de la suma es: "<<*R1<<endl;
}


int main()
{
	int N1=0;
	int N2=0;
	int RESUL=0;
	
	PedirNums(&N1,&N2);
	Suma(&RESUL,&N1,&N2);
	Imprimir(&RESUL);
	
	return 0;
}
