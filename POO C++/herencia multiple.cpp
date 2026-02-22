#include <iostream>
using namespace std;

class base1{
protected:
int i;

public:
base1(int x){i=x; cout<<"Construyendo base 1"<<endl;}	
~base1(){cout<<"Destruyendo base 1"<<endl;}
};

class base2{
protected:
int k;

public:
base2(int x){k=x; cout<<"Construyendo base 2"<<endl;}	
~base2(){cout<<"Destruyendo base 2"<<endl;}
};

class derivada : public base1, public base2{
	int j;
	public:
		derivada(int x, int y, int z) : base1(y), base2(z)
		{j=x; cout<<"Construyendo derivada"<<endl;}
		~derivada(){cout<<"Destruyendo derivada"<<endl;}

void mostrar(){cout<<i<<" "<<j<<" "<<k<<endl;}
};

int main()
{
	derivada obj(3,4,5);
	obj.mostrar(); // mostrar 3 4 5 
	return 0;
}
