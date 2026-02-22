// Apuntadores5.cpp 
#include <iostream>
using namespace std;

int main()
{

 float a = 5.5;
 float b = 7.5;
 float temp = 0;
 float &pa = a;
 float &pb = b;

 cout << endl << endl;
 cout <<"a= "<< a << " " <<"b = "<< b << endl << endl;
 
 temp = pa;
 pa = pb;
 pb = temp;
 cout << endl << endl;
 cout <<"a= " <<pa << " " <<"b = "<< pb << endl << endl << endl;
 cout <<"La dir de a = " <<&pa << " " <<"La dir de b = "<< &pb << endl << endl << endl;
 
 system("pause");
 return 0;
 
}

