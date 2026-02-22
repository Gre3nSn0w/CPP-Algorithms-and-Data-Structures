//Hernandez Llanos Fernando - 2CV9
#include <iostream>
#include <math.h>
using namespace std;

class circulo {
	protected:
		double area;
		double perimetro;
		double radio;
	public:	
	circulo (double r)//constructor
	{
		radio=r;
	}
	
	void leer_radio()
	{
		cout<<"Ingrese el radio: ";
		cin>>radio;
	}
	
	void calcular_area()
	{
		area=(3.1416 * pow(radio,2));
	}
	
	void calcular_perimetro()
	{
		perimetro= 2 * 3.1416 * radio;
	}
	
	void imprimir_area_perimetro()
	{
	   cout<<"El area es: "<<area<<endl;
	   cout<<"El perimetro es: "<<perimetro<<endl;
	   cout<<endl;
	}
	
	~circulo(){}//destructor
	
};

class rectangulo{
	protected:
		double area;
		double perimetro;
		double base;
		double altura;
	public:
	rectangulo (double b,double a)	//constructor
	{
		base=b;
		altura=a;
	}
	
	void leer_base()
	{
		cout<<"Ingrese la base: ";
		cin>>base;		
	}
	
	void leer_altura()
	{
		cout<<"Ingresa la altura: ";
		cin>>altura;
	}
	
	void calcular_area_perimetro()
	{
		area=base*altura;
		perimetro=2*(base+altura);
	}
	
	void imprimir_area_perimetro()
	{
		cout<<"El area es: "<<area<<endl;
		cout<<"El perimetro es: "<<perimetro;
		cout<<endl;
	}
	
	~rectangulo(){}// destructor
};


class cilindro : public circulo, public rectangulo {
protected:
    double volumen;

public:
    cilindro(double r, double b, double a) : circulo(r), rectangulo(b, a) {
        calcular_volumen(); 
    }

    void calcular_volumen() {
        calcular_area();
        volumen = circulo::area * rectangulo::altura;
    }

    void imprimir_volumen() {
    	cout<<endl;
        cout<<"El volumen del cilindro es: "<<volumen;
    }
    
    ~cilindro(){}//destructor
};

int main()
{
	circulo obj(5.5);
	obj.leer_radio();
	obj.calcular_area();
	obj.calcular_perimetro();
	obj.imprimir_area_perimetro();
	
	rectangulo obj2(4.5, 6.8);
	obj2.leer_base();
	obj2.leer_altura();
	obj2.calcular_area_perimetro();
	obj2.imprimir_area_perimetro();
	
	cilindro obj3(5.5, 0, 6.8);
    obj3.calcular_volumen();
    obj3.imprimir_volumen();
	
	return 0;
}
