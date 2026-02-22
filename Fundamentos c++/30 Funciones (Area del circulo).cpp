 #include <iostream>
 #include <math.h>
 using namespace std;
 
  float PedirRadio()
    {
  	 float r=0;
  	 cout<<"Dame el radio: ";
  	 cin>>r;
  	
  	 return r;
    }  
 
   float CalcularA(float r)
   {
   	  float a=0;
   	  a=(3.1416)*pow(r,2);
   	  return a;  	
   } 
   
   void imprimir(float a)
   {
   	cout<<endl;
   	cout<<"El area es: "<<a<<endl;
   }
 
 int main()
  {
    float A=0;
    float R=0;
    
    R = PedirRadio();
    A = CalcularA(R);
    imprimir(A);
  }

 
