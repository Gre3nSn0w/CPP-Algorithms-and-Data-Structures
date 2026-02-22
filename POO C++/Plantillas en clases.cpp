//Hernandez Llanos Fernando - 2CV9
#include <iostream>
using namespace std;

template<typename T>class Arreglo
{
private:
    int m;
    T* v;
    
public:
    Arreglo(int cantidad) //Constructor
    {
        m=cantidad;
        v=new T[m];

        for (int i=0; i<m; i++)
        {
            cout<<"Dato"<<i<<": ";
            cin>>v[i];
        }
    }

    ~Arreglo(){delete[] v;} //Destructor

    void ingresar()
    {
        for (int i=0; i<m; i++)
        {
            cout<<"Dato"<<i<<": ";
            cin>>v[i];
        }
    }

    void mostrar()
    {
        for (int i=0; i<m; i++)
        {
            cout<<endl;
            cout<<"Dato"<<i<<": "<<v[i]<<endl;
        }
    }

    void verificarEstado()
    {
        if (m==0)
            cout<<"El arreglo esta vacio"<<endl;
        else
            cout<<"El arreglo esta completo"<<endl;
    }

    void ordenarAscendente()
    {
        for (int i=0; i<m-1; i++)
        {
            for (int j=0; j<m-i-1; j++)
            {
                if (v[j] > v[j+1])
                {
                    T temp=v[j];
                    v[j]=v[j+1];
                    v[j+1]=temp;
                }
            }
        }
    }
};

int main()
{
    int a;
    cout<<"Ingresa la dimension del arreglo: ";
    cin>>a;

    Arreglo<float>c(a);

    int opcion;
    do
    {
    	cout<<endl;
        cout<<"--- BIENVENIDO USUARIO ---"<<endl; //Menu
        cout<<"1. Verificar estado del arreglo"<<endl;
        cout<<"2. Ordenar elementos del arreglo (ascendente)"<<endl;
        cout<<"3. Mostrar elementos del arreglo"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingresa una opcion: ";
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            c.verificarEstado();
            break;

        case 2:
            c.ordenarAscendente();
            cout<<"El arreglo ha sido ordenado en forma ascendente"<<endl;
            break;

        case 3:
        	cout<<"Elementos del arreglo:"<<endl;
            c.mostrar();
            break;
            
        case 4:
            cout<<"Saliendo del programa"<<endl;
            break;

        default:
            cout<<"ERROR, por favor ingrese una opcion valida"<<endl;
        }
    } 
	while (opcion != 4);
	
    return 0;
}

