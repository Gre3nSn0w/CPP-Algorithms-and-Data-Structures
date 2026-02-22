#include <iostream>
using namespace std;

void PedirSueldo (int *pt1, int *pt2, int *pt3)
{
	for (int i=0; i<3; i++)
	{
		cout<<"Dame el sueldo del trabajador 1 para el dia "<<i+1<<endl;
			cin>>*pt1;
		cout<<"Dame el sueldo del trabajador 2 para el dia "<<i+1<<endl;
			cin>>*pt2;
		cout<<"Dame el sueldo del trabajador 3 para el dia "<<i+1<<endl;
			cin>>*pt3;
		
		pt1++;
		pt2++;
		pt3++;
	}
}

void CalcularSueldosPorDia (int *pt1, int *pt2, int *pt3, int *sd)
{
	for (int i=0; i<3; i++)
	{
		*sd = *pt1 + *pt2 + *pt3;
		
		pt1++;
		pt2++;
		pt3++;
		sd++;
	}
}

void CalcularTotalSueldos(int *sd, int *t)
{
	for(int i=0; i<3; i++)
	{
		*t = *t + *sd;
		
		t++;
		sd++;
	}
}

void Imprimir (int *sd, int *t)
{
	system ("cls");

	for (int i=0; i<3; i++)
	{
		cout<<"El sueldo en el dia: "<<i+1<<" es: "<<*sd<<endl;
		sd++;
	}
	cout<<"El sueldo total de los tres dias es: "<<*t;
}

int main ()
{
	int T1[3];
	int T2[3];
	int T3[3];
	int SueldoDia[3];
	int Total=0;
	
	PedirSueldo(T1,T2,T3);
	CalcularSueldosPorDia(T1,T2,T3,SueldoDia);
	CalcularTotalSueldos(SueldoDia, &Total);
	Imprimir (SueldoDia, &Total);
	
	return 0;
}
