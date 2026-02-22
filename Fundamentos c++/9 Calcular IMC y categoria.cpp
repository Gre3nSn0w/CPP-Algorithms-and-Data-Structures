#include <iostream>
using namespace std;

int main ()

{
   // Programa para saber el índice y categoría de masa corporal.
   
	char nombre [30];
	float pes = 0;
	float alt = 0;
	float imc = 0;
	
	cout<<" "<< endl;
	
	cout<<"Bienvenido, ingresa tu nombre: "  ;
    cin.getline (nombre,30);
	
	cout<<"Ingresa tu peso: "  ;
    cin >> pes;
	
	cout <<"Ingresa tu altura: "  ;
    cin >> alt;
	
	imc = pes / alt / alt;
	
		
	 if(imc < 16) // 1 - 40kg y 1.65 ./
	 {	
	    cout<<" "<<endl;
		cout<<nombre<<", tu IMC es: " << imc << endl;
		cout<<"Estas dentro de la categoria: 'Delgadez severa'" << endl << endl;
	 } 

	 if(imc>=16 && imc <=16.99) // 2 - 49kg y 1.70 ./
	 {	
	    cout<<" "<<endl;
		cout<<nombre<<", tu IMC es: " << imc << endl;
		cout<<"Estas dentro de la categoria: 'Delgadez moderada'" << endl << endl;
	 } 
	
	 if(imc>=17 && imc <=18.49)  // 3 - 55kg y 1.73 ./
	 {	
	    cout<<" "<<endl;		
        cout<<nombre<<", tu IMC es: " << imc << endl;
		cout<<"Estas dentro de la categoria: 'Delgadez aceptable'" << endl << endl;
	 }
	
	
	 if(imc>=18.5 && imc <=24.99) // 4 - 85kg y 1.85 ./
	 {
		cout<<" "<<endl;		
        cout<<nombre<<", tu IMC es: " << imc << endl;
		cout<<"Estas dentro de la categoria: 'Peso normal'" << endl << endl;
	 }
	
	
	 if(imc>=25 && imc <=29.99) // 5 ./
	 {
		cout<<" "<<endl;		
        cout<<nombre<<", tu IMC es: " << imc << endl;
		cout<<"Estas dentro de la categoria: 'Sobrepeso'" << endl << endl;
	 }
	
	 if(imc>=30 && imc <=34.99) // 6 ./
	 {
		cout<<" "<<endl;		
        cout<<nombre<<", tu IMC es: " << imc << endl;
		cout<<"Estas dentro de la categoria: 'Obesidad tipo 1'" << endl << endl;
	 }
	
	 if(imc>=35 && imc <=39.99) // 7 ./
	 {
		cout<<" "<<endl;		
        cout<<nombre<<", tu IMC es: " << imc << endl;
		cout<<"Estas dentro de la categoria: 'Obesidad tipo 2'" << endl << endl;
	 }
	
 	if(imc>=40 && imc <=49.99) // 8  
	 {
		cout<<" "<<endl;		
        cout<<nombre<<", tu IMC es: " << imc << endl;
		cout<<"Estas dentro de la categoria: 'Obesidad tipo 3 (obesidad morbida)'" << endl << endl;
	 }
	
 	if(imc >= 50 ) // 9 - 155kg y 1.75
	 {
		cout<<" "<<endl;		
        cout<<nombre<<", tu IMC es: " << imc << endl;
		cout<<"Estas dentro de la categoria: 'Obesidad tipo 4 (extrema)'" << endl << endl;
	 }
	
	
	return 0;
}
