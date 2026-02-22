#include <iostream>
#include <string>
using namespace std;

struct estudiante{
	string nombre;
	unsigned int boleta;
	float promedio;
};


int main()
{
	estudiante e;
	
	cout<<"Escribe nombre: ";
	cin>>e.nombre;
	cout<<"Escribe boleta: ";
	cin>>e.boleta;
	cout<<"Escribe promedio: ";
	cin>>e.promedio;
	
	estudiante *ptr;
	ptr = &e;
	
	cout<<endl;
	cout<<"Nombre: "<< ptr->nombre<<endl;
	cout<<"Boleta: "<< ptr->boleta<<endl;
	
	estudiante m={"Fernando Llanos", 2023300178, 8.2};
	cout<<"Promedio elevado: "<<m.promedio * 2;
	return 0;
}
