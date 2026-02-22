// If-Else-If.cpp
  #include <iostream>
  using namespace std;
  
  int main()
  {
    char Nombre[40];
    float Peso = 0;
 
   cout << "Dame tu nombre: " ;
   cin.getline(Nombre,40);
   
   cout << "Dame tu peso: " ;
   cin>>Peso;
   cout << endl; 
   
   
  if (Peso >= 50 && Peso <= 60)
  {
  cout<<Nombre<<" eres delgada" <<endl<<endl<<endl; 
  }
  
  else if(Peso > 60 && Peso <= 80)
  {
  cout<<Nombre<<" tienes sobrepeso" <<endl<<endl<<endl; 
  }
  
  else if(Peso > 80 && Peso <= 120)
  {
  cout<<Nombre<<" tienes obesidad" <<endl<<endl<<endl; 
  }
 
  else
  {
  cout <<Nombre <<" tienes obesidad morbida"<< endl<<endl<<endl;
  } 
 
    system("pause");
    return 0; 
}





