//Hernandez Llanos Fernando - 2CV9
#include <iostream>
using namespace std;

class Vector3D {
	
	private:
	float x;
	float y;
	float z;
		
    public:
    Vector3D(): x(0), y(0), z(0) {}
    
	void inicializar()
	{
		cout<<"Escribe el valor de x: ";
		cin>>x;
		cout<<"Escribe el valor de y: ";
		cin>>y;
		cout<<"Escribe el valor de z: ";
		cin>>z;
		cout<<endl;
	}
	
	void mostrar()
	{
		cout<<endl;
		cout<<"X: ("<<x<<") Y: ("<<y<<") Z: ("<<z<<")"<<endl<<endl;
	}
	
	Vector3D sumar(Vector3D obj)
	{
		float res1, res2, res3;
		Vector3D res;
		res.x= x + obj.x;
		res.y= y + obj.y;
		res.z= z + obj.z;
		return(res);
	}
	
	void prodEscalar(Vector3D obj)
	{
	    float resp; 
		resp = x*obj.x + y*obj.y + z*obj.z;
		cout<<"El producto escalar es: "<<resp<<endl;
	}
				
};

int main(int argc, char** argv) 
{	
    float resp;

	Vector3D obj1,obj2,obj3,obj4;
	obj1.inicializar();
	obj2.inicializar();
	obj3=obj1.sumar(obj2);
	obj3.mostrar();
	obj1.prodEscalar(obj2);	
	
	return 0;
}


