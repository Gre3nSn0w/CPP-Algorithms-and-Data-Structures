 #include <iostream>
 #include <math.h>
 using namespace std;

 double PedirCorx()
  {
   	 double x=0;
  	 cout<<"Ingresa la coordenada X: ";
   	 cin>>x;
  	 return x;
  } 
  
  double PedirCory()
   {
  	 double y=0;
  	 cout<<"Ingresa la coordenada Y: ";
  	 cin>>y;
  	 return y;
  } 
  
  double Calcular(double x, double y)
  {
  	double calc=0;
  	calc = atan(y/x);
  	return calc;
  }
  
  void imprimir(double calc)
  {
  	cout<<endl;
  	cout<<"El angulo es: "<<calc<<" radianes."<<endl;
  }
  
  int main()
  {
  	double corX=0;
  	double corY=0;
  	double angulo=0;
  	
  	corX=PedirCorx();
  	corY=PedirCory();
  	angulo=Calcular(corX, corY);
  	imprimir(angulo);
  }
  
  // Fernandollanos //
