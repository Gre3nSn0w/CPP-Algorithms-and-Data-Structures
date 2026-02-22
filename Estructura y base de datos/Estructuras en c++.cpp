#include <iostream>
#include <string>
using namespace std;

struct estudiante //Creamos la estructura estudiante
{
    string nombre; //Definimos las variables que vamos a utilizar (miembros / datos miembro) 
    float calificaciones[3]; //Arreglo para las 3 calificaciones
    float promedio;
};

int main() //Funcion principal
{
    estudiante e[5]; //Arreglo de 5 localidades para los alumnos
    
    for (int i=0; i<5; ++i) //Bucle para guardar el nombre de los 5 estudiantes
	{
		float SumarCalif=0; //Reinicia la variable en cada bucle y permite calcular el promedio sin errores
		
        cout<<"Escribe el nombre del estudiante "<<i+1<<": ";
        cin>>e[i].nombre;

        for (int j=0; j<3; ++j) //Bucle para guardar las 3 calificaciones
		{
            cout<<"Escribe la calificacion "<<j+1<<": ";
            cin>>e[i].calificaciones[j];
            SumarCalif += e[i].calificaciones[j];
        }

        e[i].promedio = SumarCalif / 3; //Calculamos el promedio
        cout<<endl;
    }

    //Limpiamos pantalla para que se vea mas limipio durante la ejecucion
	system("cls");
    cout<<"Informacion de los estudiantes:"<<endl<<endl;
    for (int i=0; i<5; ++i) //Bucle para imprimir la imprimir la informacion de 5 los estudiantes
	{
        cout<<"Estudiante "<<i+1<<endl;
        cout<<"Nombre: "<<e[i].nombre<<endl;
        
        //Imprime las 3 calificaciones que insertamos en una sola linea de codigo
		cout<<"Calificaciones: ";
        for (int j=0; j<3; ++j) 
		{
            cout<<e[i].calificaciones[j]<<" | "; //Ordena la visualizacion de las calificaciones al ejecutar
        }
        
        //Imprime el promedio
        cout<<endl;
        cout<<"Promedio: "<<e[i].promedio<<endl;
        cout<<endl;
    }

    return 0; //Fin del programa
}

