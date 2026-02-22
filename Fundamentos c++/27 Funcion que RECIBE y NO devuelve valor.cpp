 #include <iostream>
 #include <math.h>
 using namespace std;
 
 void CalcularArea (float r)
 {
 	float A=0;
 	A=(3.1416)*pow(r,2);
 	cout<<endl;
 	cout<<"El area es: "<<A<<endl;
 }
 
 int main()
 {
 	float R=0;
 	
 	cout<<"Dame el radio: ";
 	cin>>R;
 	
 	CalcularArea(R);
 	return 0;
 	
 }
