#include <iostream>
using namespace std;

int main()
{
  int Matriz[3][3];
  int conta=3;

  for(int k=0; k<3; k++)
  {
    for(int l=0; l<3; l++)
    {
      cout<<"Dame un numero"<<endl;
      cin>>Matriz[k][l];
    }
  }
  
  cout<<endl<<endl;
  system("cls") ;
  
  for(int m=0; m<3; m++)
  {
    for(int n=0; n<3; n++)
    {
      cout<<Matriz[m][n]<<" ";
    }
    cout<<endl;
  }
 
  cout<<endl<<endl;

  for(int i=0; i<3; i++)
  {
    for(int j=0; j<conta; j++)
    {
      cout<<Matriz[i][j]<<" ";
    }
    conta--;
    cout<<endl;
  }

  cout<<endl<<endl;
  system("pause");
  return 0;
}
