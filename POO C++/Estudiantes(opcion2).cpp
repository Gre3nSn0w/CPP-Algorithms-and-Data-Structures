// Hernandez llanos Fernando + Chaparro Sanchez Gilberto Isaac - 2CV9
#include <iostream>
using namespace std;

class Estudiante 
{
public:
    Estudiante();
    void setId(int id);
    void addCalificacion(double calificacion);
    double calcPromedio();
    void showDatos();

private:
    int id;
    double calificaciones[5];
    int numCalificaciones;
};

Estudiante::Estudiante() 
{
    id=0;
    numCalificaciones=0;
    for(int i=0; i<5; i++) 
	{
        calificaciones[i] = 0;
    }
}

void Estudiante::setId(int id) 
{
    this->id=id; 
}

void Estudiante::addCalificacion(double calificacion) 
{
    if (numCalificaciones < 5) 
	{
        calificaciones[numCalificaciones] = calificacion;
        numCalificaciones++;
    }
}

double Estudiante::calcPromedio() 
{
    double suma=0;
    for (int i=0; i<numCalificaciones; i++) 
	{
        suma += calificaciones[i];
    }
    return suma / numCalificaciones;
}

void Estudiante::showDatos() 
{
    cout<<"ID: "<<id<<endl;
    cout<<"Promedio: "<<calcPromedio()<<endl;
}

void getDatosEstudiante(int numEstudiante, Estudiante& estudiante) 
{
    int id;
    double calificacion;

    system("cls"); //borrar en caso de querer ver todo
    cout<<"Ingrese el ID del estudiante "<<numEstudiante<<": ";
    cin>>id;
    estudiante.setId(id);

    for (int i=0; i<5; i++) 
	{
        cout<<"Ingrese una calificacion para el estudiante "<<numEstudiante<< ": ";
        cin>>calificacion;
        estudiante.addCalificacion(calificacion);
    }
}

int main(int argc, char*argv[]) 
{
    Estudiante obj1,obj2;

    getDatosEstudiante(1, obj1);
    cout<<endl;
    getDatosEstudiante(2, obj2);

    //Desplegar datos 
    system("cls");
    cout<<"Estudiante 1:"<<endl;
    obj1.showDatos();

    cout<<endl;
    cout<<"Estudiante 2:"<<endl;
    obj2.showDatos();

    return 0;
}

