#include <iostream>
using namespace std;

class cuadrado{
	protected:
		double area;
		double perimetro;
		double lado;
	public:
		cuadrado(double a, double p, double l)//constructor
		{ 
			area=a;
			perimetro=p;
			lado=l;
		}
		
	void LeerLado()
	{
		cout<<"Ingresa el lado del cuadrado: ";
		cin>>lado;
	}
	
	void CalcularArea()
	{
		area=lado*lado;
	}
	
	void CalcularPerimetro()
	{
		perimetro=lado*4;
	}

	void Imprimir_Area_Perimetro()
	{
		cout<<"El area es: "<<area<<endl;
		cout<<"El perimetro es: "<<perimetro<<endl;
		cout<<endl;
	}
	
	~cuadrado(){}//destructor
};


class circulo:public cuadrado{
	private:
		double radio;
	public:
		circulo(double a, double p, double l, double r)
		:cuadrado(a, p, l)//constructor y herencia
		{
			radio=r;
		}
	
	void leer_radio()
	{
		cout<<"Ingresa el valor del radio del circulo: ";
		cin>>radio;
	}
	
	void calcular_area()
	{
		area=3.1416*radio*radio;
	}
	
	void calcular_perimetro() {
        perimetro = 2 * 3.1416 * radio;
    }

	
	~circulo(){}//destructor
	 
};


int main()
{
   cuadrado obj(1.0, 1.0, 1.0);
   obj.LeerLado();
   obj.CalcularArea();
   obj.CalcularPerimetro();
   obj.Imprimir_Area_Perimetro();
   
   circulo obj2(1.0, 1.0 ,1.0,1.0);
   obj2.leer_radio();
   obj2.calcular_area();
   obj2.calcular_perimetro();
   obj2.Imprimir_Area_Perimetro();
   return 0;	
}
