//Tiro al blanco
#include <iostream>
#include <math.h>
using namespace std;

void PedirTiros(int &NT)
{
	cout<<"Dame el numero de tiros: ";
	cin>>NT;
}

void PedirCoordenadas(double &CoordX, double &CoordY)
{
	cout<<endl;
	cout<<"Dame la coordenada X: ";
	cin >> CoordX;
	
	cout<<"Dame la coordenada Y: ";
	cin >> CoordY;
}

double CalcularRadio(double &X, double &Y)
{
	double sumatoria = pow(X,2) + pow(Y,2);
	double rad = sqrt(sumatoria);
	
	return rad;
}

int CalcularPuntaje(int &Pun, int &numtiros)
{
	double Radio=0;
	int R1 = 50;
	int R2 = 100;
	int R3 = 150;
	int PR1 = 100;
	int PR2 = 50;
	int PR3 = 25;
	int puntaje = 0;
	double CoordX = 0;
	double CoordY = 0;
	
	for(int i=1; i<= numtiros; i++)
	{ 
	   PedirCoordenadas(CoordX, CoordY);
	   
	   Radio = CalcularRadio(CoordX, CoordY);
	   
	   if(Radio >=0 && Radio <= R1)
	   {
	   	puntaje = puntaje + PR1;
	   }
	   
	   else if(Radio >R1 && Radio <= R2)
	   {
	   	puntaje = puntaje + PR2;
	   }
	   
	   else if(Radio >R2 && Radio <= R3)
	   {
	   	puntaje = puntaje + PR3;
	   }
	   cout<<endl<<endl;
	}
	
	Pun = puntaje;
}


void Imprimir(int &Pun)
{
	cout<<"El puntaje total es: "<< Pun<<endl<<endl;
}


int main()
{
	int NumTiros = 0;
	int Puntaje = 0;
	
	PedirTiros(NumTiros);
	CalcularPuntaje(Puntaje,NumTiros);
	Imprimir(Puntaje);
	
	system("pause");
	return 0;
}
