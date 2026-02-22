 #include <iostream>
 #include <math.h>
 using namespace std;
 
 void CalcularArea()
 {
 	float R=0;
 	float A=0;
 	
	cout<<"Dame el radio: ";
 	cin>>R;
 	
 	A=(3.1416)*pow(R,2);
 	cout<<endl;
 	cout<<"El area es: "<<A<<endl;
 }
 
 int main()
 {
 	CalcularArea();
 	return 0;
 }
