// FuncionesMat(sen,cos,tan).cpp

#include <iostream>
#include <math.h>
using namespace std;


int main()
{
   double beta = 0;
   double alfa = 0;
   double gama = 0;

   beta = asin(0.8);
   
   cout << "Beta en radianes es: " << beta 
        << endl << endl;
   beta = (beta * 57.2957795);


   cout << "Beta en grados es: " << beta 
        << endl << endl;
   alfa = acos(0.6);


   cout << "Alfa en radianes es: " << alfa 
        << endl << endl;
   alfa = (alfa * 57.2957795);


   cout << "Alfa en grados es: " << alfa 
        << endl << endl;
   gama = atan(0.75);


   cout << "Gama en radianes es: " << gama 
        << endl << endl;
   gama = (gama * 57.2957795);


   cout << "Gama en grados es: " << gama 
        << endl << endl;

   system("pause");
	
   return 0;
}

