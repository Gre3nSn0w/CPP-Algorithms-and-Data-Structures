 #include<string.h>
 #include<iostream>
 #include<ctype.h>
 using namespace std;



void PedirCadena(char cadenita[50])
{
	cout<<"Dame una cadena"<<endl;
	cin.getline(cadenita,50);
}

int ContarVocales(char cadeno[50])
{
	int contavocales=0;
	int longitud=strlen(cadeno);
	
	for(int i=0; i<4; i++)
	{
	
	if(cadeno[i]=='a' || cadeno[i]=='e' || cadeno[i]=='i' || cadeno[i]=='o' || cadeno[i]=='u')
	{
		contavocales++;
	}

}
return contavocales;
}

int ContaConsonantes(char cad[50], int voc)
{
	int longitud=strlen(cad);
	int consonantes=0;
	consonantes=longitud-voc;
	return consonantes;
}

void Imprimir(int ContaVoc, int ContaCon)
{
	cout<<"La oracion tiene: "<<ContaVoc<<"vocales y "<<ContaCon<<"Consonantes"<<endl;
}

int main()
{
char cad[50];
int ContaVoc=0;
int Contacon=0;

PedirCadena(cad);
ContaVoc=ContarVocales(cad);
Contacon=ContaConsonantes(cad,ContaVoc);
Imprimir(ContaVoc,Contacon);
}






