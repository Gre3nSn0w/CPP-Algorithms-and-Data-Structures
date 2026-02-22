#include <iostream>
using namespace std;

void PedirNum(int &pe, int &pn, int &pd)
{
	cout<<"Ingresa el entero: ";
	cin>>pe;
	
	cout<<"Dame el numerador: ";
	cin>>pn;
	
	cout<<"Dame el denominador: ";
	cin>>pd;
	cout<<endl;
}

void Convertir(int &pe, int &pn, int &pd)
{
	pn=(pe*pd)+pn;
}

void Calcular(int &nf, int &n1, int &d1, int &df, int &n2, int &d2)
{
	nf=(n1*d2)+(d1*n2);
	df=(d1*d2);
}

void Imprimir(int &nf, int &df)
{
	cout<<"El resultado es: "<<nf<<" / "<<df;
}

int main()
{
   //Fr1
   int E1=0;	
   int N1=0;
   int D1=0;
   //Fr2
   int E2=0;
   int N2=0;
   int D2=0;
   //FrF
   int NF=0;
   int DF=0;
   
   PedirNum(E1,N1,D1);
   PedirNum(E2,N2,D2); //El compilador repite la funcion al invocarla dos veces
   Convertir(E1,N1,D1);
   Convertir(E2,N2,D2); //El compilador repite la funcion al invocarla dos veces
   Calcular(NF,N1,D1,DF,N2,D2);
   Imprimir(NF,DF);
}
