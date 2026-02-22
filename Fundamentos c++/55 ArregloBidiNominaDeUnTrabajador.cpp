#include <iostream>
using namespace std;

int main()
{	
 char Nombre[3][60];
 double SueldoDia[3][5];
 double SueldoSemana[3];
 double DescTrab[3];
 double Impuesto[3];
 double SueldoTotal[3];
 double Sueldo=0;

 for(int i=0; i<3; i++)
 { 
  cin.ignore();
  cout<<"Dame tu nombre: ";
  cin.getline(Nombre[i],60);
  
  Sueldo=0;
  
  for(int j=0; j<5; j++)
  {
    cout<<"Dame el sueldo del dia: ";
    cin>>SueldoDia[i][j];
    Sueldo = Sueldo+SueldoDia[i][j];
  }
  
  SueldoSemana[i]=Sueldo;
  DescTrab[i]=SueldoSemana[i] * (0.10);

  if(SueldoSemana[i] >= 1000 && SueldoSemana[i] <= 5000)
  {
    Impuesto[i] = 0;
  }
  
  else if(SueldoSemana[i] >= 5001 && SueldoSemana[i] <= 10000)
  {
    Impuesto[i] = SueldoSemana[i] * 0.10;
  }
  
  else if(SueldoSemana[i] >= 10001 && SueldoSemana[i] <= 35000)
  {
    Impuesto[i] = SueldoSemana[i] * 0.15;
  }
  
  else if(SueldoSemana[i] >= 35001)
  {
    Impuesto[i] = SueldoSemana[i] * 0.25;
  }
  
  SueldoTotal[i] = SueldoSemana[i] - DescTrab[i] - Impuesto[i];
  system("cls");
 } 

 system("cls");

 for(int m = 0; m < 3; m++)
 {
   cout << Nombre[m] << " tu"<< endl;
   cout << endl;
   cout << "Sueldo de la semana es: " << SueldoSemana[m] << endl;
   cout << "Descuento es: " << DescTrab[m] << endl;
   cout << "Impuesto es: " << Impuesto[m] << endl;
   cout << "Sueldo total es: " << SueldoTotal[m] << endl << endl;
 }

 system("pause");
 return 0;
}
