//Hernandez Llanos Fernando - 2CV9
#include <iostream>
using namespace std;

template<typename T>class Arreglo
{
private:
    int filas;
    int columnas;
    T** matriz;

public:
    Arreglo(int filas, int columnas) //Constructor
    {
        this -> filas=filas;
        this -> columnas=columnas;
        matriz=new T*[filas];
        
		for (int i=0; i<filas; i++)
        {
            matriz[i]=new T[columnas];
        }
    }
    
	~Arreglo() //Destructor
	{
        for (int i=0; i<filas; i++)
        {
            delete[] matriz[i];
        }
        delete[] matriz;
    }

     void ingresarValores()
     {
        cout<<"Ingrese los valores de la matriz:"<<endl;
        for (int i=0; i<filas; i++)
        {
            for (int j=0; j<columnas; j++)
            {
                cout<<"Valor [" <<i<<"]["<<j<<"]: ";
                cin>>matriz[i][j];
            }
        }
     }
    
    void mostrarMatriz()
    {
    	cout<<endl;
        cout<<"Matriz ordenada:"<<endl;
        for (int i=0; i<filas; i++)
        {
            for (int j=0; j<columnas; j++)
            {
                cout<<matriz[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void ordenarFilasAscendente()
    {
        for (int i=0; i<filas; i++)
        {
            for (int j=0; j<columnas-1; j++)
            {
                for (int k=0; k<columnas-j-1; k++)
                {
                    if (matriz[i][k] > matriz[i][k+1])
                    {
                        T temp = matriz[i][k];
                        matriz[i][k] = matriz[i][k+1];
                        matriz[i][k+1] = temp;
                    }
                }
            }
        }
    }
};

int main()
{
    int filas=3;
    int columnas=3;
    Arreglo<int> matriz(filas, columnas);
    
    matriz.ingresarValores();
    matriz.ordenarFilasAscendente();
    matriz.mostrarMatriz();

    return 0;
}

