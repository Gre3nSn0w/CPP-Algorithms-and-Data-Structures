#include <iostream>
using namespace std;

class Vector2D{
	private:
		double x,y;
	public:
	Vector2D(double vx, double vy)	
	{
		cout<<"Constructor vector2D"<<endl;
		x=vx;
		y=vy;
	}
	
	double getx(){return x;}
	double gety(){return y;}
	
	void setx(double vx){x=vx;}
	void sety(double vy){y=vy;}
	
	~Vector2D(){cout<<"Destructor Vector2D"<<endl;}
};

class Vector3D:public Vector2D{
	private:
		double z;
	public:
	Vector3D(double vx, double vy, double vz)
	:Vector2D(vx,vy)
	{
		cout<<"Constructor Vector3D"<<endl;
		z=vz;
	}
	
	double getz(){return z;}	
	void setz(double vz){z=vz;}
	
	~Vector3D(){cout<<"Destructor Vector3D"<<endl;}
};


int main()
{
	Vector3D obj(1.0, 1.0, 1.0);
	obj.setx(3.0);
	obj.setz(-2.0);
	cout<<obj.getx()<<"i+ "<<obj.gety()<<"j+ "<<obj.getz()<<"k"<<endl;
	return 0;
}
