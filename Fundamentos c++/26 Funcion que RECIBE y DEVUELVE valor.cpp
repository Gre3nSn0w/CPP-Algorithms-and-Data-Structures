 #include <iostream>
 #include <math.h>
 using namespace std;
 
 float CalcularArea(float r)
 {
 	float a=0;
 	a=(3.1416)*pow(r,2);
 	return a;
 }
 
 int main()
 {
 	float A=0;
 	float R=0;
 	
 	cout<<"Dame el radio: ";
 	cin>>R;
 	
 	A=CalcularArea(R);
 	cout<<endl;
 	cout<<"El area es: "<<A<<endl;
 	return 0;
 }
