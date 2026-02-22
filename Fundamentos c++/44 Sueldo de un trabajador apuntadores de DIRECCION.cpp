#include <iostream>
using namespace std;

void PedirDatos(char &nom, int &hor)
{
	cout<<"Ingresa tu nombre: ";
	cin.getline(&nom,30);
	
	cout<<"Ingresa tus horas trabajadas: ";
	cin>>hor;
}

void CalcularSueldo(int &hor, int &suel)
{
	if(hor >=1 && hor <=3)
		suel = (hor*40); 
		
	else if(hor >=4 && hor <=6)
		suel = (hor*80);
	
	else if(hor >=7 && hor <=10)
    	suel = (hor*160);	
}

void CalcularImpuesto(int &hor, int &ips, int &suel)
{
	if(hor >=1 && hor <=3)
		ips = 0; //0%
	
	else if(hor >=4 && hor <=6)	
		ips = (suel*0.10); //10%
		
	
	else if(hor >=7 && hor <=10)
		ips = (suel*0.15); //15%	 
}


void SueldoMenosImpuesto(int &hor, int &sumi, int &suel, int &ips)
{
	if(hor >=1 && hor <=3)
	    sumi = (suel-ips);
	  
	else if(hor >=4 && hor <=6)
		sumi = (suel-ips);
	  
	else if(hor >=7 && hor <=10)
	    sumi = (suel-ips);
}


void Imprimir(char &noms, int &hor, int &suel, int &ips, int &sumi)
{
	if(hor >=1 && hor <=3){}
	else if(hor >=4 && hor <=6){}
	else if(hor >=7 && hor <=10){}
	
	cout<<" "<<endl; 
	cout<<&noms<<", tus horas trabajadas fueron: " << hor<<endl;
	cout<<"Sueldo inicial: $" << suel <<endl;
	cout<<"Impuesto: $" << ips << endl;
	cout<<"Sueldo final: $"<< sumi << endl;
			
}


int main()
{
  char nombre[30];
  int horas=0;
  int imp=0;	
  int sueldo=0;
  int smi=0;
  
  PedirDatos(nombre[30],horas);
  CalcularSueldo(horas,sueldo);
  CalcularImpuesto(horas,imp,sueldo);
  SueldoMenosImpuesto(horas,smi,sueldo,imp);
  
  Imprimir(nombre[30],horas,sueldo,imp,smi);
}
