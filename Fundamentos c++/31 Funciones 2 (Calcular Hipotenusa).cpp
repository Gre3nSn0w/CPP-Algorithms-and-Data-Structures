 #include <iostream>
 #include <math.h>
 using namespace std;

float PedirCatetoA()
  {
  	float a=0;	
  	cout<<"Dame el cateto adyacente: ";
  	cin>>a;
  	return a;
  }
  
  float PedirCatetoO()
  {
  	float o=0;
  	cout<<"Dame el cateto opuesto: ";
  	cin>>o;
  	return o;
  }
  
  float CalcularH(float a, float o)
  {
  	float h=0;
  	h=sqrt(pow(a,2)+pow(o,2));
  	return h;
  }
  
  void imprimir(float h)
  {
  	cout<<endl;
  	cout<<"La hipotenusa es: "<<h<<endl;
  }


 int main()
 {
 	float CA=0;
 	float CO=0;
 	float H=0;
 	
 	CA = PedirCatetoA();
 	CO = PedirCatetoO();
 	H = CalcularH(CA,CO);
 	imprimir(H);
 }
 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
