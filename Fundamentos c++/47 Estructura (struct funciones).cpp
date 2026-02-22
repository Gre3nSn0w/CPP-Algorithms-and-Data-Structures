//Persona *p1(pila) = new Persona 'Resto de la memoria' ();'Constructor'

#include <iostream>
using namespace std;

struct Persona
{
	char Nombre[50];
	float Peso;
	int Edad;
};

void PedirDatos(Persona *p)
{
	cin.clear();
	cin.ignore();
	
	cout<<"Dame tu nombre: "<<endl;
	cin.getline(p->Nombre,50);
	
	cout<<"Dame tu peso: "<<endl;
	cin>> p->Peso;
	
	cout<<"Dame tu edad: "<<endl;
	cin>> p->Edad;
	cout<<endl<<endl;		
}

void ImprimirDatos(Persona *p3)
{
	cout<<"Esta es la funcion imprimir"<<endl;
	cout<<p3<<endl;
	cout<<"Tu nombre es: "<< p3->Nombre << endl;
	cout<<"Tu peso es: "<< p3->Peso << endl;
	cout<<"Tu edad es: " << p3->Edad << endl;
	cout<<endl<<endl;
}


int main()
{
	Persona *p1 = new Persona();
	
	cout<<p1<<endl;
	PedirDatos(p1);
	
	system("cls");
	ImprimirDatos(p1);
	
	delete p1;
	system("pause");
	return 0;
}
