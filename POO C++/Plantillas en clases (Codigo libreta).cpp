#include <iostream>
using namespace std;

template<class T>class Arreglo
{
	private:
		int m;
		T * v;
	public:
	Arreglo (int cantidad) //Construstctor
	{
		m=cantidad;
		v= new T[m];
		
	for(int i=0; i<m; i++)	
	{
		cout<<"Dato"<<i<<" :";
		cin>>v[i];
	}
}	
~Arreglo(){delete []v;} //Destructor
	
	void ingresar()
	{
		for(int i=0; i<m; i++)
		{
			cout<<"Dato"<<i<<" :";
			cin>> v[i];
		}
	}
	
	
	
	void mostrar()
	{
		for(int i=0; i<m; i++)
		{
			cout<<endl;
			cout<<"Dato"<<i<<" :"<<v[i]<<endl;
		}
	}	
};

int main()
{
	int a;
	cout<<"Dimension arreglos: ";
	cin>>a;
	
	Arreglo<float>c(a);
	c.ingresar();
	c.mostrar();
	return 0;
	
}
