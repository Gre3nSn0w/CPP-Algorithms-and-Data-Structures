 //Pedir un arreglo de 10 enteros y hacer la sumatoria de todos
 #include <iostream>
 using namespace std;

  void pedirDatos(int suma[], int enteros)
   {
      cout << "Ingresa los 10 enteros: " <<endl<<endl;
      for(int i = 0; i < enteros; i++)
       {
       	cout<<"("<< i + 1 << "/" << enteros << "): ";
        cin >> suma[i];
       }
   }

  int totalSuma(int Suma[10])
  {
    int sumaTotal = 0;
    for(int i = 0; i < 10; i++)
	 {
       sumaTotal += Suma[i];
     }
    return sumaTotal;
  }
  
  int imprimir(int suma[], int enteros)
   {
   	 cout<<endl;
     cout << "La suma total del arreglo es: " << totalSuma(suma) << endl;
   }
  
 int main()
  {
    int enteros=10;
    int suma[enteros];
    
    pedirDatos(suma,enteros);
    totalSuma(suma);
    imprimir(suma,enteros);
    
    return 0;
  } 

