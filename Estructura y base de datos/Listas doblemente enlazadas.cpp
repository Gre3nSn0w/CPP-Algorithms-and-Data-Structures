#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct Invitado {
    string nombre; 
    string apellido; 
    string genero;
    string platilloPreferido; 
    string bebidaPreferida;
    string artistaFavorito;
    int edad;
    Invitado* anterior, *siguiente;
};

class ListaInvitados {
private:
    Invitado* cabecera;
    string platilloHombres;
    string bebidaHombres;
    string artistaHombres;
    string platilloMujeres;
    string bebidaMujeres;
    string artistaMujeres;
    int hombres;
    int mujeres;

public:
    ListaInvitados() : cabecera(NULL), hombres(0), mujeres(0) {}
    void agregarInvitado();
    void mostrarInformacion();
};

Invitado* crearInvitado() {
    Invitado* nuevo = new Invitado();
    cout<<"Nombre: "; 
    getline(cin, nuevo->nombre);
    cout<<"Apellido: "; 
    getline(cin, nuevo->apellido);
    cout<<"Genero (masculino o femenino): "; 
    getline(cin, nuevo->genero);
    cout<<"Edad: "; 
    cin>>nuevo->edad; 
    cin.ignore(); 
    cout<<"Platillo preferido: "; 
    getline(cin, nuevo->platilloPreferido);
    cout<<"Bebida preferida: "; 
    getline(cin, nuevo->bebidaPreferida);
    cout<<"Artista favorito: "; 
    getline(cin, nuevo->artistaFavorito);
    
    nuevo->anterior = NULL;
    nuevo->siguiente = NULL;
    return nuevo;
}

void ListaInvitados::agregarInvitado() {
    Invitado* nuevoInvitado = crearInvitado();
    if (!cabecera) {
        cabecera = nuevoInvitado;
    } else {
        Invitado* temp = cabecera;
        while (temp->siguiente) {
            temp = temp->siguiente;
        }

        if (nuevoInvitado->genero == "masculino") {
            hombres++;
            if (hombres == 1 || nuevoInvitado->platilloPreferido == platilloHombres || 
                nuevoInvitado->bebidaPreferida == bebidaHombres || nuevoInvitado->artistaFavorito == artistaHombres) {
                platilloHombres = nuevoInvitado->platilloPreferido;
                bebidaHombres = nuevoInvitado->bebidaPreferida;
                artistaHombres = nuevoInvitado->artistaFavorito;
            }
        } else if (nuevoInvitado->genero == "femenino") {
            mujeres++;
            if (mujeres == 1 || nuevoInvitado->platilloPreferido == platilloMujeres || 
                nuevoInvitado->bebidaPreferida == bebidaMujeres || nuevoInvitado->artistaFavorito == artistaMujeres) {
                platilloMujeres = nuevoInvitado->platilloPreferido;
                bebidaMujeres = nuevoInvitado->bebidaPreferida;
                artistaMujeres = nuevoInvitado->artistaFavorito;
            }
        } else {
            cout<<"Genero no valido, ingrese 'masculino' o 'femenino'."<<endl;
            delete nuevoInvitado;
            return;
        }
        temp->siguiente = nuevoInvitado;
        nuevoInvitado->anterior = temp;
    }
}

void ListaInvitados::mostrarInformacion() {
    if (!cabecera) {
        cout<<"No hay invitados"<<endl;
        return;
    }

    int sumaEdades = 0, cantidadInvitados = 0;

    Invitado* temp = cabecera;
    while (temp) {
        cantidadInvitados++;
        sumaEdades += temp->edad;
        temp = temp->siguiente;
    }

    cout<<"Numero de hombres que asistiran: "<< hombres <<endl;
    cout<<"Platillo mas pedido por hombres: "<< platilloHombres <<endl;
    cout<<"Bebida mas pedida por hombres: "<< bebidaHombres <<endl;
    cout<<"Artista mas pedido por hombres: "<< artistaHombres <<endl;
    cout<<endl;

    cout<<"Numero de mujeres que asistiran: "<< mujeres <<endl;
    cout<<"Platillo mas pedido por mujeres: "<< platilloMujeres <<endl;
    cout<<"Bebida mas pedida por mujeres: "<< bebidaMujeres <<endl;
    cout<<"Artista mas pedido por mujeres: "<< artistaMujeres <<endl;

    cout<<endl;
    cout<<"Edad promedio de los asistentes: "<< sumaEdades / cantidadInvitados <<endl;
}

int main() {
    ListaInvitados lista;
    int op;
    do {
        cout<<endl;
        cout<<"Bienvenido a la posada de la ESIMEZ, seleccione una opcion:"<<endl;
        cout<<"1) Agregar invitado"<<endl;
        cout<<"2) Mostrar informacion"<<endl;
        cout<<"0) Salir"<< endl;
        cin>>op; 
        cin.ignore(); 
        system("cls");
        
        if (op == 1) 
            lista.agregarInvitado();
        else if (op == 2) 
            lista.mostrarInformacion();
        else if (op != 0) 
            cout<<"Opcion no valida";
    } while (op != 0);
    return 0;
}


