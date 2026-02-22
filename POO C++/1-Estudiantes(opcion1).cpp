// Hernandez llanos Fernando + Chaparro Sanchez Gilberto Isaac - 2CV9
#include <iostream>
using namespace std;

class Estudiante 
{
   public:
       Estudiante();
       void setId(int id);
       void agregarCalificacion(double calificacion);
       double calcularPromedio();
       void getDatos();

   private:
       int id;
       double calificaciones[5];
       int numCalificaciones;
};

Estudiante::Estudiante() 
{
    id=0;
    numCalificaciones=0;
    for (int i=0; i<5; i++) 
	{
        calificaciones[i]=0;
    }
}

void Estudiante::setId(int id) 
{
    this->id=id; //El puntero this es una variable predefinida para todas las funciones u operadores miembro de una clase. 
}

void Estudiante::agregarCalificacion(double calificacion) 
{
    if(numCalificaciones<5) 
	{
        calificaciones[numCalificaciones]=calificacion;
        numCalificaciones++;
    }
}

double Estudiante::calcularPromedio() 
{
    double suma=0;
    for (int i=0; i<numCalificaciones; i++) 
	{
        suma+=calificaciones[i];
    }
    return suma/numCalificaciones;
}

void Estudiante::getDatos() 
{
    cout<<"ID: "<<id<<endl;
    cout<<"Promedio: "<<calcularPromedio()<<endl;
}



int main(int argc, char*argv[]) 
{
    Estudiante obj1, obj2;

    int id;
    double calificacion;


    //Estudiante 1
    cout<<"Ingrese el ID del estudiante 1: ";
    cin>>id;
    obj1.setId(id);

    for(int i=0; i<5; i++) 
	{
        cout<<"Ingrese una calificacion para el estudiante 1: ";
        cin>>calificacion;
        obj1.agregarCalificacion(calificacion);
    }

    //Estudiante 2
    system("cls");
	cout<<"Ingrese el ID del estudiante 2: ";
    cin>>id;
    obj2.setId(id);

    for (int i=0; i<5; i++) 
	{
        cout<<"Ingrese una calificacion para el estudiante 2: ";
        cin>>calificacion;
        obj2.agregarCalificacion(calificacion);
    }

    //Desplegar datos 
    
    system("cls");
    cout<<"Estudiante 1:"<<endl;
    obj1.getDatos();

    cout<<endl;
    cout<<"Estudiante 2:"<<endl;
    obj2.getDatos();

   
    return 0;
}

