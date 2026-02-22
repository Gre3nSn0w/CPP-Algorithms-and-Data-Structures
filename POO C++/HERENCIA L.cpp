#include<iostream>
using namespace std;

class base{
	public:
		int i1;
	protected:
		int i2;
	private:
		int i3;
};
class D1:private base{
	public:
		void f(){
			cout<<"ENTRE A LA CLASE D1 "<<endl;

		}
};
class D2:protected base{
	public:
	void g(){cout<<"ENTRE A LA CLASE D2 ";}
};
class D3:public base{
	public:
		void h(){cout<<"ENTRE A LA CLASE D3 ";}
};
int main (){
	D1 d1;
	d1.f();
	//d1.i1=0;
	//d1.i2=0;
	//d1.i3=0;
	
	D2 d2;
	d2.i1=0;
	d2.i2=0;
	//d2.i3=0;
	//d2.g();
	
	D3 d3;
	d3.i1=0;
	//d3.i2=0;
	//d3.i3=0;
	d3.h();
	cout<<"TERMINE PROGRAMA"<<endl;
	return 0;
}


