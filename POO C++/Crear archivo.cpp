#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Persona
{
private:
    string nombre;
	string calif[2];
		
public:
	Persona()
	{
		cout<<"Escribe el nombre: ";
		cin>>nombre;
		for(int i=0;i<2;i++)
		{
		    cout<<"Escribe calif"<<i+1<<": ";
		    cin>>calif[i];
		}
		system("CLS");
	}
	
	string imprimir()
	{
		string linea=nombre;
		for(int i=0;i<2;i++)
		{
			linea += ","+ calif[i];	
		}
		linea += "\n";
		return linea;
	}
	
};


int main()
{
	string ruta;
	Persona per[2];
	int i;
	
	cout<<"Escriba la ruta del archivo: "<<endl;
	cin>>ruta;
	
	ofstream salida(ruta.c_str(), ios_base::out);
	if (salida.good()) //caso en el que el stream se realizo sin problemas
	{
		for(int j=0;j<2;j++)
		{
			salida<<per[j].imprimir();
		}
	        cout<<"El archivo fue creado con exito"<<endl<<endl;;	
	}
	
	else
	{
		cout<<endl;
		cout<<"Error al crear el archivo de salida."<<endl;
	}
	
	salida.flush();
	salida.close();
	cout<<"|- Fin del programa -|"<<endl;
	return 0;  	
}
