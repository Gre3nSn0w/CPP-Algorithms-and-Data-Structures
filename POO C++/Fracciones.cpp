//Hernandez Llanos Fernando - 2CV9
#include <iostream>
#include <string.h>
using namespace std;

class NumeroRacional {
	private:
		int numerador;
		int denominador;
	public:
	  NumeroRacional() //constructor por default
	  { 
          numerador = 0;
          denominador = 1;
      }

	  NumeroRacional(int numerador, int denominador) //constructor definido por el usuario
	  {
	  	string a;
	  	this->numerador = numerador; 
	  	this->denominador = denominador;

	  	if (this->denominador < 0) 
		{
	  		cout<<"El denominador es negativo, se invertira el signo."<<endl;
	  		this->numerador *= -1;
	  		this->denominador *= -1;
	  	}

	  	if (this->denominador == 0) 
		{
			cout<<"El denominador es igual a cero, la fracción es inválida."<<endl;
			getline(cin, a);
			exit(1); 
		}

		// Simplificar fracción
		int d = Divisor(this->numerador, this->denominador);
		this->numerador /= d;
		this->denominador /= d;
	  };
	
	  void mostrar() {
	    cout<<numerador<<" / "<<denominador<<endl;
	  };
	  
	  NumeroRacional operator + (const NumeroRacional& obj2) {
	  	NumeroRacional res;
	  	res.numerador = (numerador * obj2.denominador) + (obj2.numerador * denominador);
	  	res.denominador = denominador * obj2.denominador;
	  	return res;
	  };

	  NumeroRacional operator - (const NumeroRacional& obj2) {
	  	 NumeroRacional res;
	  	 res.numerador = (numerador * obj2.denominador) - (obj2.numerador * denominador);
	  	 res.denominador = denominador * obj2.denominador;
	  	 return res;
	  };

	  NumeroRacional operator * (const NumeroRacional& obj2) {
	  	 NumeroRacional res;
	  	 res.numerador = numerador * obj2.numerador;
	  	 res.denominador = denominador * obj2.denominador;
	  	 return res;
	  };

	  NumeroRacional operator / (const NumeroRacional& obj2) {
	  	 NumeroRacional res;
	  	 res.numerador = numerador * obj2.denominador;
	  	 res.denominador = denominador * obj2.numerador;
	  	 return res;
	  };

	  bool operator > (const NumeroRacional& obj2) {
	  	float val1 = static_cast<float>(numerador) / static_cast<float>(denominador);
	  	float val2 = static_cast<float>(obj2.numerador) / static_cast<float>(obj2.denominador);
	  	
	  	return val1 > val2;
	  };

	  bool operator < (const NumeroRacional& obj2) {
	  	float val1 = static_cast<float>(numerador) / static_cast<float>(denominador);
	  	float val2 = static_cast<float>(obj2.numerador) / static_cast<float>(obj2.denominador);
	  	
	  	return val1 < val2;
	  };

	  bool operator == (const NumeroRacional& obj2) {
	  	float val1 = (float)(numerador) / static_cast<float>(denominador);
	  	float val2 = static_cast<float>(obj2.numerador) / static_cast<float>(obj2.denominador);
	  	
	  	return val1 == val2;
	  };

	  int Divisor(int a, int b) 
	  {
	  	if (b==0)
	  	return a;
	  	return Divisor(b, a%b);
	  }
};

int main() 
{
	NumeroRacional a(1,2), b(1,4),c;
	
	//Suma
	c=a+b;
	cout<<"Suma: ";
	c.mostrar();

	//Resta
	c=a-b;
	cout<<"Resta: ";
	c.mostrar();

	//Multiplicación
	c=a*b;
	cout<<"Multiplicacion: ";
	c.mostrar();

	//División
	c=a/b;
	cout<<"Division: ";
	c.mostrar();
	cout<<endl;

	//Operadores relacionales
	if (a>b)
		cout<<"a es mayor que b"<<endl;
		
	if (a<b)
		cout<<"a es menor que b"<<endl;
		
	if (a==b)
		cout<<"a es igual a b"<<endl;
	
	return 0;
}


