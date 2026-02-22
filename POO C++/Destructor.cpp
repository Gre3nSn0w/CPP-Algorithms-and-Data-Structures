//Hernandez Llanos Fernando
#include <iostream>
using namespace std;
//void estatico();
void dinamico();
class playera
{
	public:
	    void set_precio(float valor);
	    void set_talla(char valor);
	    float get_precio();
	    char get_talla();
	    playera();
	    ~playera();
	
	private:
		float precio;
		char talla;
};

playera::playera()
{
	precio = 10.5;
	talla = 'M';
}

playera::~playera()
{ 
  cout<<endl;
  cout<<"Se invoca al destructor"<<endl;	
}

void playera::set_precio(float valor)
{
	precio=valor;
}

void playera::set_talla(char valor)
{
	talla=valor;
}

float playera::get_precio()
{
	return(precio);
}

char playera::get_talla()
{
	return(talla);
}

void dinamico()
{
  playera *p = new playera();
  cout<<"Precio: "<<p->get_precio()<<endl;
  delete(p);
}

int main(int argc, char*argv[])
{
	dinamico();
	return 0;
}
   
