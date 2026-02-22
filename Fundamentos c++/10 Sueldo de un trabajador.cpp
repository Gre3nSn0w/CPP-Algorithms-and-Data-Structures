#include <iostream>
using namespace std;

int main()
{
	//Programa para calcular el sueldo del dia de un trabajador
	
	char nombre[30];
	int horas = 0;
	int imp = 0;
	int sueldo = 0;
	int smi = 0;
	
	cout<<" "<<endl; //salto de linea para que se vea bien :)
	
	cout<<"Bienvenido, ingresa tu nombre: ";
	cin.getline (nombre,30);
	
	cout<<"Ingresa tus horas trabajadas: ";
	cin>>horas;
	
	if(horas >=1 && horas <=3)
	 {
		sueldo = (horas * 40);
		imp = 0; //0%
		smi = (sueldo - imp);
	 } 
	
	if(horas >=4 && horas <=6)
     {
		sueldo = (horas * 80);
		imp = (sueldo * 0.10); //10%
		smi = (sueldo - imp);
	 }  
	
	if(horas >=7 && horas <=10)
	 {
    	sueldo = (horas * 160);
		imp = (sueldo * 0.15); //15%
		smi = (sueldo - imp);
	 }
	
   
	
	
	cout<<" "<<endl; //salto de linea para que se vea bien :)
	
	cout<<nombre<<", tus horas trabajadas fueron: " << horas<<endl;
	cout<<"Sueldo inicial: $" << sueldo <<endl;
	cout<<"Impuesto: $" << imp << endl;
	cout<<"Sueldo final: $"<< smi << endl;
	
	return 0;
}
