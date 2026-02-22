//Hernandez Llanos Fernando 
#include <iostream>
#include <math.h>
using namespace std;

class Vector2D {
	
	private:
	float x;
	float y;
		
    public:
	void inicializar()
	{
		cout<<"Escribe el valor de x: ";
		cin>>x;
		cout<<"Escribe el valor de y: ";
		cin>>y;
		cout<<endl;
	}
	
	void mostrar()
	{
		cout<<endl;
		cout<<"X: "<<x<<" Y: "<<y<<endl;
	}
	
	Vector2D sumar(Vector2D obj)
	{
		float res1, res2;
		Vector2D res;
		res.x= x + obj.x;
		res.y= y + obj.y;
		return(res);
	}
	
	float getx()
	{
		return(x);
	}
	
	float gety()
	{
		return(y);
	}
								
};

int main(int argc, char** argv) 
{	
	Vector2D obj1,obj2,obj3;
	obj1.inicializar();
	//obj2.inicializar(); //descomentar en caso de querer calcular el vector 2d normal
	//obj3=obj1.sumar(obj2);
	//obj3.mostrar();	
	
	float norma; //comentar en caso de no querer calcular la norma
	norma = obj1.getx()*obj1.getx();
	norma += obj1.gety()*obj1.gety(); 
	obj1.mostrar();
	cout<<"Norma: "<<sqrt(norma);
	
	return 0;
}


