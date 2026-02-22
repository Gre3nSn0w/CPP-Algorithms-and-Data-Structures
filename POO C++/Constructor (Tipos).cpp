//Hernandez Llanos Fernando 
#include <iostream>
using namespace std;

class Vector2D {
	
	private:
	float x;
	float y;
		
    public:
	Vector2D() //constructor por defecto
	{
		cout<<"Escribe el valor de x: ";
		cin>>x;
		cout<<"Escribe el valor de y: ";
		cin>>y;
		cout<<endl;
	}
	
	Vector2D(float i,float j) //constructor definido por el usuario
	{
		x=i;
		y=j;
	}
	
	void mostrar()
	{
		cout<<endl;
		cout<<"X: "<<x<<" Y: "<<y<<endl;
	}
};

								
int main(int argc, char** argv) 
{	
	Vector2D obj1; //constructor por defecto
	Vector2D obj2(2.0,2.0); //constructor definido por el usuario (segunda versión)
	Vector2D obj3(obj2); //constructor copia
	obj1.mostrar();
	obj2.mostrar();
	obj3.mostrar();
	return 0;
}


