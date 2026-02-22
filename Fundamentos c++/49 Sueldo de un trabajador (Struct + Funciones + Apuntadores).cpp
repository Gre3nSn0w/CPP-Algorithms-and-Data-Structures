#include <iostream>
using namespace std;

struct Sueldo
{
    char Nombre[30];
    int horas;
    int imp;
    int sueldo;
    int smi;
};

void PedirDatos(Sueldo *s)
{
	cout<<"Ingresa tu nombre: ";
	cin.getline(s->Nombre,30);
	
	do{
		cout<<"Ingresa tus horas trabajadas: ";
		cin>>s->horas;
		system("cls");
		} while(s->horas <1 || s->horas >10); 
		system("cls");
}

void CalcularSueldo(Sueldo *s2)
{
	if(s2->horas >=1 && s2->horas <=3)
	s2->sueldo=(s2->horas * 40);
	
	else if(s2->horas >=4 && s2->horas <=6)
	s2->sueldo=(s2->horas * 80);
	
	else if(s2->horas >=7 && s2->horas <=10)
	s2->sueldo=(s2->horas * 160);
}


void CalcularImpuesto(Sueldo *s3)
{
	if(s3->horas >=1 && s3->horas <=3)
	s3->imp=0;
	
	else if(s3->horas >=4 && s3->horas <=6)
	s3->imp=(s3->sueldo * 0.10);
	
	else if(s3->horas >=7 && s3->horas <=10)
	s3->imp=(s3->sueldo * 0.15);
}

void SueldoMenosImpuesto(Sueldo *s4)
{
	s4->smi=(s4->sueldo - s4->imp); //aplica para todos los casos
}

void Imprimir(Sueldo *s5)
{
	cout<<" "<<endl;
	cout<<s5->Nombre<<", tus horas trabajadas fueron: "<<s5->horas<<endl;
	cout<<"Sueldo inicial: $"<<s5->sueldo<<endl;
	cout<<"Impuesto: $"<<s5->imp<<endl;
	cout<<"Sueldo final: $"<<s5->smi<<endl;
}



int main ()
{
	Sueldo *s1 = new Sueldo();
	
	PedirDatos(s1);
	CalcularSueldo(s1);
	CalcularImpuesto(s1);
	SueldoMenosImpuesto(s1);
	Imprimir(s1);
	
	delete s1;
	return 0;
}
