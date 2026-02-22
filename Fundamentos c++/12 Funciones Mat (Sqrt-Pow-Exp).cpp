// FuncionesMat(Sqrt-Pow-Exp).cpp 
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
   double Num = 0;
   double Res = 0;

   cout << "Dame un num a elevar: ";
   cin >> Num;
   Res = pow(Num,3);
   cout << "El num elevado al cubo es: " << Res << endl << endl;

   cout << "Dame un num para obtener raiz: " ;
   cin >> Num;
   Res = sqrt(Num);
   cout << "La raiz del num es: " << Res 
        << endl << endl;

   cout << "Dame un num para X: " ;
   cin >> Num;
   Res = exp(Num);

   cout << "El valor de e elevado a la x es: " 
        << Res << endl << endl;

   system("pause");
	
   return 0;
}

