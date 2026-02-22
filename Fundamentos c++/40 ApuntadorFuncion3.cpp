 // ApuntadorFuncion3.cpp
 #include <iostream>
 using namespace std;

 void PedirNums(float *num1, float *num2)
 {
  cout << "Dame el primer num: ";
  cin >> *num1;
  cout << "Dame el segundo num: ";
  cin >> *num2;
 }


 float Suma(float *Num1, float *Num2)
 {
  PedirNums(Num1,Num2);
  float Res = *Num1+*Num2;
  return Res;
 }


 void Imprimir(float *Res)
 {
  cout<<endl;
  cout<<"El resultado de la suma es: " <<*Res<<endl;
  cout<<endl;
 }

 int main()
 {
	
  float a = 0;
  float b = 0;
  float res = 0;
  //PedirNums(&a,&b);
  res = Suma(&a,&b);
  Imprimir(&res);
  system("pause");
  return 0;

 }
