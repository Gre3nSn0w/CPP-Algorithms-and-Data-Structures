// FuncionStrlen.cpp

  #include <iostream>
  #include <string.h>
  using namespace std;

  int main()
{
  	
    char cadena[20];
	int longitud = 0;
	
	cout << "Dame una cadena: ";
    cin.get(cadena,20);
    
    longitud = strlen(cadena);
    
    cout << "" << endl;
    cout << "La longitud de la cadena es: "<< longitud << endl << endl << endl;

    system("pause");
    return 0;
}
