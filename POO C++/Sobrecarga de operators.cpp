#include <iostream>
#include <string.h>
using namespace std;

class NumeroRacional{
	private:
		int numerador;
		int denominador;
	public:
	  NumeroRacional(){};//constructor por default
	  NumeroRacional(int numerador, int denominador)//constructor definido por el usuario
	  {
	  	string a;
	  	this->numerador=numerador; 
	  	this->denominador=denominador;
	  	if(this->denominador<0)
	  	{
	  		cout<<"Denominador negativo"<<endl;
	  		this->numerador*=-1;
		}
		
		if(this->denominador==0)
		{
			cout<<"Denominador creo"<<endl;
			cout<<"Presione enter para continuar";
			getline(cin,a);
			exit(1);
		}	
	  };
	
	  void mostrar()
	  {
	    cout<<numerador<<" / "<<denominador<<endl;
	  };
	  
	  NumeroRacional operator + (NumeroRacional obj2){
	  	NumeroRacional res;
	  	res.numerador=(numerador*obj2.denominador)+(obj2.numerador*denominador);
	  	res.denominador=denominador*obj2.denominador;
	  	return res;
	  };	  
	  
	  int operator > (NumeroRacional obj2){
	  	float val1, val2;
	  	val1=(float)numerador/(float)denominador;
	  	val2=(float)obj2.numerador/(float)obj2.denominador;
	  	
	  	if(val1 > val2)
	  	{
	  	  return 1;	
		} 
		else
		{
			return 0;
		}
	  	
	};
};

int main()
{
	NumeroRacional a(1,2), b(1,4),c;
	c=a+b;
	c.mostrar();
	if (a>b){
	cout<<"a es mayor que b"<<endl;
	}
	
	return 0;
}

//SOLO ENVIAR UN OPERANDO EN SOBRECARGA DE OPERADORES







