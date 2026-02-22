//SentenciaSwitch.cpp

 #include <iostream>
 using namespace std;
 
 int main()
 {
    int num1 = 0;
    int num2 = 0;
    int res = 0;
    int opcion = 0;
    
  cout << "Dame el primer numero: ";
  cin >> num1;
   
  cout << "Dame el segundo numero: ";
  cin >> num2;
  cout << endl ;
  
  cout << "Elija una operacion tecleando el numero: " << endl;
  cout << "1.- Suma " << endl;
  cout << "2.- Resta" << endl;
  cout << "3.- Multiplicacion " << endl;
  cout << "4.- Division " << endl << endl;
   cin >> opcion;
   system("cls");
  
 switch (opcion)
 {
  
  case 1:
  {
   res = num1 + num2;
   cout << "El resultado de la suma es: " << res << endl << endl;
   break;
  }
  
  case 2:
  {
   if (num1 < num2)
  {
    cout << "El primer numero es menor que el segundo " << endl << endl;
    exit(1);
  }
    res = num1 - num2;
    cout << "El resultado de la resta es: " << res << endl << endl;
    break;
  }
 
  case 3:
  {
   res = (num1 * num2);
   cout << "El resultado de la multiplicación es: " << res << endl << endl;
   break;
  }
  
  case 4:
  {
   if(num1 < num2)
  {
   cout << "El primer numero es menor que el segundo " << endl << endl;
   system("pause");
   exit(1);
  }
   res = (num1 / num2);
   cout << "El resultado de la division es: " << res << endl << endl;
   break;
  }
    
  default:
  {
   cout << "Esa opcion no es valida " << endl << endl;
  }
  
 }
 
    system("pause");
    return 0;
}
