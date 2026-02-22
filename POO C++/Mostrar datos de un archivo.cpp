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
    Persona(const string& n, const string& c1, const string& c2)
    {
        nombre=n;
        calif[0]=c1;
        calif[1]=c2;
    }
	
    string imprimir()
    {
        string linea=nombre;
        for (int i=0; i<2; i++)
        {
            linea += "," + calif[i];	
        }
        linea += "\n";
        return linea;
    }
};

int main()
{
    string ruta;
    cout<<"Escriba la ruta del archivo: ";
    cin>>ruta;
    cout<<endl;

    ifstream entrada(ruta.c_str());  

    if (entrada.is_open())
    {
        string linea;
        while (getline(entrada, linea))
        {
            // Obtener datos de la persona
            string nombre, calif1, calif2;
            size_t pos=0;
            
            pos=linea.find(",");
            nombre=linea.substr(0, pos);
            linea.erase(0, pos + 1);
            
            pos=linea.find(",");
            calif1=linea.substr(0, pos);
            linea.erase(0, pos + 1);
            
            calif2=linea;

            // Instancia de 'Persona' con los datos obtenidos
            Persona persona(nombre, calif1, calif2);

            // Imprimir datos 
            cout<<"Nombre y calif: "<<persona.imprimir()<<endl;   
        }
        
		cout<<endl;
        cout<<"|- FIN DE LA LECTURA DEL ARCHIVO -|"<<endl;
    }
    
    else
    {
        cout<<"ERROR, inserte una ruta valida."<<endl<<endl;
        cout<<"|- FIN DEL PROGRAMA -|"<<endl;
    }
	
	entrada.close();
    return 0;
}


