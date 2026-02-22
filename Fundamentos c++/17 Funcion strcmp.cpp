// FuncionStrcmp.cpp 

 #include <iostream>
 #include <string.h>
 using namespace std;
 
 int main()
{
    char cadena1[20];
    char cadena2[20];
   
  cout << "Dame cadena uno: " ;
  cin >> cadena1;
  
  cout << "Dame cadena dos: " ;
  cin >> cadena2;
  
  cout << endl;
  
   if(strcmp(cadena1,cadena2) < 0)
   {
    cout << "La cadena1 es menor a cadena2" << endl << endl << endl; 
   }
  
   if(strcmp(cadena1,cadena2) == 0)
   {
    cout << "La cadena1 es igual a cadena2" << endl << endl << endl;
   }
  
  if(strcmp(cadena1,cadena2) > 0)
  {
   cout << "La cadena1 es mayor a cadena2" << endl << endl << endl;
  }

    system("pause");
    return 0;
}




