 #include <iostream>
 #include <math.h>
 using namespace std;
 
 float CalcularArea()
 {
 	float R=0;
 	float A=0;
 	
 	cout<<"Dame el radio: ";
 	cin>>R;
 	
 	A=(3.1416)*pow(R,2);
 	return A;
 }
 
 int main()
 {
 	float A=0;
 	A=CalcularArea();
 	
	 cout<<endl;
	 cout<<"El area es: "<<A<<endl;
	 return 0;
 }
