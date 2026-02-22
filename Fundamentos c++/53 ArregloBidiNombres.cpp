#include <iostream>
using namespace std;

 int main()
 {
   char Nombres[4][30];
  
   for(int i=0; i<4; i++)
   {
     cout<<"Dame tu nombre"<<endl;
     cin.getline(Nombres[i],30);
   }
   
	cout<<endl<<endl;

   for(int j=0; j<4; j++)
   { 
     cout<<Nombres[j]<<endl<<endl;
   }
    cout<<Nombres[0][1]<<endl;

 system("pause");
 return 0;
 }
