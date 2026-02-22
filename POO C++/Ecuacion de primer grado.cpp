//Hernandez Llanos Fernando - 2CV9
#include <iostream>
using namespace std;

class Ecuacion 
{
    private:
    float a,b,c,x;
        
        void LeerDatos() 
		{
            cout<<"Ingrese los valores para la ecuacion (a(x)+b=c): "<<endl<<endl;
            cout<<"a: ";
            cin>>a;
            cout<<"b: ";
            cin>>b;
            cout<<"c: ";
            cin>>c;
        }
        
    public:
    	void CalcularX() 
		{
            LeerDatos();
            x = (c-b)/a;
        }
    	
        void ImprimirX() 
		{
			cout<<endl;
            cout<<"El valor de X es: "<<x<<endl;
        }       
};

int main(int argc, char** argv) 
{
    Ecuacion obj1;
    obj1.CalcularX();
    obj1.ImprimirX();
    return 0;
}

