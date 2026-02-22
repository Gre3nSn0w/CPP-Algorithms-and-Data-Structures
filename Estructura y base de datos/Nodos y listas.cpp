#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct Persona {
    string curp;
    string nombre;
    string apellido;
    string mail;
    struct Persona* ref;
};

class Lista {
private:
    struct Persona* cab;
    struct Persona* crear_nodo();

public:
    Lista() {
        cab = NULL;
    }
    void insertar_inicio(); //Metodo para insertar un nodo al inicio de la lista
    void insertar_final();  //Metodo para insertar un nodo al final de la lista
    void recorrer_lista();  //Metodo para mostrar el contenido de la lista
    void eliminar_nodo();   //Metodo para eliminar un nodo por CURP
    void actualizar_nodo(); //Metodo para actualizar un nodo por CURP
};

void Lista::insertar_inicio() { //Inserta un nodo al inicio
    struct Persona* p;
    if (cab == NULL) {
        cab = crear_nodo();
    } else {
        p=crear_nodo();
        p->ref=cab;
        cab=p;
    }
    cout<<endl<<"Nodo insertado"<<endl<<endl;

}

void Lista::insertar_final() { //Inserta un nodo al final
    struct Persona* p;
    struct Persona* temp = cab;
    if (cab==NULL) {
        cab=crear_nodo();
    } 
	else {
        p=crear_nodo();
        while (temp->ref != NULL) 
		{
            temp=temp->ref;
        }
        temp->ref=p;
    }
    cout<<endl<<"Nodo insertado al final"<<endl<<endl;
}

void Lista::eliminar_nodo() { //Elimina un nodo por CURP
    string curp;
    cout<<"Ingrese el CURP de la persona que desea eliminar: ";
    cin>>curp;
    
    struct Persona* temp = cab;
    struct Persona* prev = NULL;
    while (temp != NULL && temp->curp != curp) {
        prev=temp;
        temp=temp->ref;
    }
    
    if (temp==NULL) {
        cout<<"No se encontro la persona con el CURP proporcionado."<<endl;
    } 
	else {
        if (prev==NULL) {
            cab=temp->ref;
        } 
		else {
            prev->ref=temp->ref;
        }
        delete temp;
        cout<<"Nodo eliminado exitosamente."<<endl;
    }
}

void Lista::actualizar_nodo() { //Actualiza un nodo por CURP
    string curp;
    cout<<"Ingrese el CURP de la persona que desea actualizar: ";
    cin>>curp;
    
    struct Persona* temp = cab;
    while (temp != NULL && temp->curp != curp) {
        temp=temp->ref;
    }
    
    if (temp==NULL) {
        cout<<"No se encontro la persona con el CURP proporcionado."<<endl;
    } 
	else {
        cout<<"Ingrese el nuevo nombre: ";
        cin.ignore();
        getline(cin, temp->nombre);
        cout<<"Ingrese el nuevo apellido: ";
        getline(cin, temp->apellido);
        cout<<"Ingrese el nuevo correo: ";
        getline(cin, temp->mail);
        cout<<"Nodo actualizado exitosamente."<<endl;
    }
}

struct Persona* Lista::crear_nodo() { //Crea el nodo
    struct Persona* n = new Persona();
    
    cout<<"Escriba el nombre del contacto:\n";
    cin.ignore();
    getline(cin, n->nombre);
    cout<<"Escriba el apellido del contacto:\n";
    getline(cin, n->apellido);
    cout<<"Escriba el CURP del contacto:\n";
    getline(cin, n->curp);
    cout<<"Escriba el correo del contacto:\n";
    getline(cin, n->mail);
    
	n->ref=NULL;
    return n;
}

void Lista::recorrer_lista() { //Imprime los datos del nodo
    struct Persona* temp = cab;
    while (temp != NULL) {
        cout<<"CURP: "<<temp->curp<<", Nombre: "<<temp->nombre<<", Apellido: "<<temp->apellido<<", Correo: "<<temp->mail<<endl;
        temp = temp->ref;
    }
}

int main() 
{
    Lista lista;
    int op;

    do {
    	cout<<endl; //Menu del programa
        cout<<"Seleccione una operacion:\n";
        cout<<"1) Insertar al inicio\n";
        cout<<"2) Insertar al final\n";
        cout<<"3) Eliminar nodo\n";
        cout<<"4) Actualizar nodo\n";
        cout<<"5) Mostrar lista\n";
        cout<<"0) Salir\n";
        cin>>op;
        system("cls");

        if (op == 1) {
            lista.insertar_inicio();
        } else if (op == 2) {
            lista.insertar_final();
        } else if (op == 3) {
            lista.eliminar_nodo();
        } else if (op == 4) {
            lista.actualizar_nodo();
        } else if (op == 5) {
            lista.recorrer_lista();
        } else if (op != 0) {
            cout << "Opcion no valida";
        }

    } while (op != 0);

    return 0;
}


//       /\
//  __   \/   __
//  \_\_\/\/_/_/
//    _\_\/_/_
//   __/_/\_\__     
//  /_/ /\/\ \_\
//       /\
//       \/       ~Fernando Llanos~





