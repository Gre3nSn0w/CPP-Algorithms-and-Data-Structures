#include <iostream>
#include<windows.h>

using namespace std;

int main()
{

double num1,num2,num3;
 

cout <<"Ingrese el primer numero: " << endl;
cin >> num1;


cout <<"Ingrese el segundo numero: " << endl;
cin >> num2;

cout <<"Ingrese el tercer numero: " << endl;
cin >> num3;

      
 if(num1 > num2 && num1 > num3)     
    {

     	cout<<"El numero mayor es num1 " << endl;
    }
 
 else if(num2 > num1 && num2 > num3)
    {

      	cout<<"El numero mayor es num2 " << endl;
    }
   
 else if(num3 > num1 && num3 > num2)
    {
   	    cout<<"El numero mayor es num3 " << endl;
    }  
      
	
	
	return 0;
}
