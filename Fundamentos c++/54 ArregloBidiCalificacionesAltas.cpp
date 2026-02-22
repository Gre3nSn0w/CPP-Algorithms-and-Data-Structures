#include <iostream>
using namespace std;

int main()
{
  char Nombre[2][50]; 
  int Cal[2][3]; 
  char Materias[3][15]; 
  int CalMayor[2];
  int NumMayor=0;

  for(int k=0; k<3; k++) 
  {
    cout<<"Dame el nombre de la materia: "<<endl; 
	cin>>Materias[k];
  }

 system("cls");

 for(int i=0; i<2; i++)
 {
   cin.ignore();
   cout<<"Dame tu nombre: "<<endl; 
   cin.getline(Nombre[i],50);
   
   NumMayor=0; 
   for(int j=0; j<3; j++)
   {
      cout<<"Dame la calificacion "<<j+1<<endl; 
	  cin>>Cal[i][j];
   
      if(NumMayor<=Cal[i][j])
      {
        NumMayor=Cal[i][j];
      }
   }

    CalMayor[i]=NumMayor; 
    system("cls");
 }

 system("cls");

 for(int p=0; p<2; p++)
 {
   cout<<Nombre[p]<<" " ;

    for(int q=0; q<3; q++)
    {
      cout<<Materias[q]<<" "<<Cal[p][q]<<" ";
    }
   cout<<endl;
 }

 cout<<endl<<endl;

 for(int m=0; m<2; m++)
 {
  cout<<Nombre[m]<<" "<<CalMayor[m]<<" "<<endl; 
 } 

 cout<<endl<<endl; 
 system("pause");
 return 0;
}


