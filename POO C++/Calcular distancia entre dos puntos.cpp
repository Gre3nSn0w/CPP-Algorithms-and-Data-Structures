//Hernandez Llanos Fernando - 2CV9
#include <iostream>
#include <math.h>
using namespace std;

class Distancia 
{
    private:
    float x1, y1, x2, y2, d;
        
    public:
        void leer_x1_y1_x2_y2()
        {
        	cout<<"Ingrese el valor de x1: ";
            cin>>x1;
            cout<<"Ingrese el valor de y1: ";
            cin>>y1;
            
			cout<<endl;
    
            cout<<"Ingrese el valor de x2: ";
            cin>>x2;
            cout<<"Ingrese el valor de y2: ";
            cin>>y2;
		}
        
        void calcular_d()
        {
        	d = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
		}
        
        void imprimir_d()
        {   
		    cout<<endl;
        	cout<<"La distancia entre los puntos (" <<x1<< ", "<<y1<<") y ("<<x2<<", "<<y2<<") es: "<<d<<endl;
		}
};


int main(int argc, char** argv) 
{
    Distancia obj1;
    obj1.leer_x1_y1_x2_y2();
    obj1.calcular_d();
    obj1.imprimir_d();
    return 0;
}

