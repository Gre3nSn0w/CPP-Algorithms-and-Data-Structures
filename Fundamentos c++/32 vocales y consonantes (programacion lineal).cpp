  #include <iostream>
  #include <stdio.h>
  using namespace std;

  int main()
  {
  string cadena;
  int vocales=0; 
  int consonante=0;
 
  cout<<"Ingresa una cadena: ";
  cin>>cadena;
 
 
    for(int i=0;i<cadena.length();i++){
 
    if((cadena[i]=='a')or (cadena[i]=='e')or (cadena[i]=='i')or (cadena[i]=='o')or (cadena[i]=='u')){
 
       vocales++;
     }else
      {
       consonante++;}
   }
 
  cout<<endl;  
  cout<<"Existen "<<vocales<<" vocales y "<<consonante<<" consonantes"<<endl;

  return 0;
  } 
  
