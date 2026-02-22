//Listas en c++
#include <iostream>
#include <string>
using namespace std;


struct Persona{
	
	string curp;
	string nombre;
	string apellido;
	string mail;
	
	struct Persona *ref;
	
};


class lista{
	
	private:
		struct Persona *cab; //cabecera de la lista
		
		struct Persona *crear_nodo();
				
	public:
		lista() 
		{
			cab=NULL;
		}
		void insertar_inicio();
				
};

void lista::insertar_inicio()
{
	struct Persona *per;
	
	if (cab==NULL)
	{
		cab=crear_nodo();
	}
	else
	{
		per = crear_nodo();
		per -> ref=cab;
		cab = per;
	}
	
	cout<<endl;
	cout<<"Nodo insertado"<<endl;
}


struct Persona *lista::crear_nodo()
{
	struct Persona *p = new Persona();
	cout<<"Escriba el CURP: ";
	cin>>p->curp;
	
	cout<<"Escribe el nombre: ";
	cin>>p->nombre;
	
	cout<<"Escribe el apellido: ";
	cin>>p->apellido;
	
	cout<<"Escribe el mail: ";
	cin>>p->mail;
	
	p->ref=NULL;
	return (p);
	
	delete p;
};




int main()
{
  lista obj;
  obj.insertar_inicio();
  return 0; 	
}
