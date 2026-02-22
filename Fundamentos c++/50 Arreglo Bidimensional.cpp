 #include<iostream>
 using namespace std;

 int main()
 {
     int Datos[3][3];
   
     for(int Fila=0; Fila<3; Fila++)
     {
        for(int Columna=0; Columna<3; Columna++)
        {
           cout<<"Dame un numero"<<endl;
           cin>>Datos[Fila][Columna];
        }
	 }
	
     system("cls");
    
     for(int Fil=0; Fil<3; Fil++)
     {
        for(int Col=0; Col<3; Col++)
        {
           cout<<Datos[Fil][Col]<<" ";
        }
	       cout<<endl;
     }
    
    cout<<endl<<endl;
    system("pause");
    return 0;
 }



