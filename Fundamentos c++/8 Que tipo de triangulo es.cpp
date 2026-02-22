#include <iostream>
#include<windows.h> //agregar libreria 
#define color SetConsoleTextAttribute //definir que color va a ser la instruccion 'SetConsoleTextAttribute'
using namespace std;

int main()
{
	// Programa para determinar que tipo de triangulo es.
	
	float L1 = 0;
	float L2 = 0;
	float L3 = 0;
	
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE ); //Declaramos instruccion de la salida en la consola
		
	cout<<" "<<endl;
	cout<<"Ingresa el primer lado: " ;
    cin >> L1;    
    cout<<"Ingresa el segundo lado: " ;
    cin >> L2;    
	cout<<"Ingresa el tercer lado: " ;
    cin >> L3;
    
    if (L1 == L2 && L1 == L3) 
    {
    	cout<<" "<<endl;
    	cout<<"El triangulo es Equilatero: " << endl << endl << endl; // Tiene los 3 lados iguales.	
    	color(hConsole, 2);
    	cout<<"              *               " << endl;
		cout<<"            *   *             " << endl;
		cout<<"          *       *           " << endl;
		cout<<"        *           *         " << endl;
		cout<<"      *               *       " << endl;
		cout<<"    *                   *     " << endl;	
		cout<<"  *   *   *   *   *   *   *   " << endl << endl;
	}
    
	else if (L1 == L2 || L1 == L3 || L2 == L3)
	{
		cout<<" "<<endl;
		cout<<"El triangulo es Isoceles: " << endl << endl << endl; // Tiene 2 lados iguales.
		color(hConsole, 2);
			cout<<"        *        " << endl;
			cout<<"       * *       " << endl;
		    cout<<"      *   *      " << endl;
		    cout<<"     *     *     " << endl;
		    cout<<"    *       *    " << endl;
		    cout<<"   *         *   " << endl;
		    cout<<"  *           *   " << endl;
		    cout<<" *  *   *   *  *  " << endl << endl;		    
	}
	
	else 
	{
		  cout<<" "<<endl;
		  cout<<"El triangulo es Escaleno: " << endl << endl << endl; // Tiene los 3 lados diferentes.
		  color(hConsole, 2);
	    cout<<"     *                                      " << endl;
		cout<<"      *  *                                  " << endl;
		cout<<"       *    *                               " << endl;
		cout<<"        *      *                            " << endl;
		cout<<"         *        *                         " << endl;
		cout<<"          *          *                      " << endl;
		cout<<"           *            *                   " << endl;
		cout<<"            *              *                " << endl;
		cout<<"             *                *             " << endl;
		cout<<"              *                  *          " << endl;
		cout<<"               *                            " << endl;
		cout<<"                *   *    *   *   *   *      " << endl << endl;		
	}
	
    return 0;		
}
