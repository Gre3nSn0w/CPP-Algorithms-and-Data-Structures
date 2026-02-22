//Hernandez Llanos Fernando - 2CV9
#include <iostream>
using namespace std;

class teatro; //Declaración de la clase 'teatro' para que la función amiga pueda usarla

class persona {
private:
    char genero;
    int edad;
    int costo;
public:
    persona() //Constructor
	{  
        genero=' ';
        edad=0;
        costo=0;
    }
    
    void leer_datos() 
	{
        cout<<"Ingrese el genero (H o M): ";
        cin>>genero;
        cout<<"Ingrese la edad: ";
        cin>>edad;
        if (edad <= 18) 
		{
            costo=90;
        } 
		else 
		{
            costo=150;
        }
    }
    
    char getGenero() 
	{
        return genero;
    }
    
    int getEdad() 
	{
        return edad;
    }
    
    int getCosto() 
	{
        return costo;
    }
    
    friend void informacion(teatro);
    ~persona(){} //Destructor
};

class teatro {
private:
    int suma;
    persona personas[10];
public:
    teatro() //Constructor
	{ 
        suma=0;
        for (int i=0; i<10; i++) 
		{
            personas[i] = persona();
        }
    }
    
	void leer_datos() 
	{
        for (int i=0; i<10; i++) 
		{
            personas[i].leer_datos();
            suma += personas[i].getCosto();
        }
    }
    
    void imprimir_suma() 
	{
    	cout<<endl;
        cout<<"La suma recaudada es: $"<<suma<<" pesos"<<endl;
    }
    
    persona getPersona(int i) 
	{
        return personas[i];
    }
    
    ~teatro(){} //Destructor
};

void informacion(teatro t) 
{
    int contador_hombres=0;
    int contador_mujeres=0;
    int total_personas=10;
    int suma_edades=0;
    
    for (int i=0; i<total_personas; i++) 
	{
        persona p=t.getPersona(i);
        if (p.getGenero() == 'H') 
		{
            contador_hombres++;
        }
		 
		else 
		{
            contador_mujeres++;
        }
        suma_edades += p.getEdad();
    }
    
    //Nota bien xtreme -->
    float promedio_edad = suma_edades / static_cast<float>(total_personas); //El 'static_cast' sirve para conviertir de manera explícita un tipo de dato a otro
    float porcentaje_hombres = (contador_hombres * 100.0) / total_personas;
    float porcentaje_mujeres = (contador_mujeres * 100.0) / total_personas;
    
    cout<<"Promedio de edad: "<<promedio_edad<<endl;
    cout<<"Porcentaje de hombres: "<<porcentaje_hombres<<"%"<<endl;
    cout<<"Porcentaje de mujeres: "<<porcentaje_mujeres<<"%"<<endl;
}

int main() 
{
    teatro t;
    t.leer_datos();
    t.imprimir_suma();
    informacion(t);
    
    return 0;
}

