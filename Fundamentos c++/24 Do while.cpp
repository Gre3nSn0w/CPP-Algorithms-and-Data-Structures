//do while
#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
	char opcion;
	
	do
	{
	system ("cls");	
	cout<<"Teclea la opcion que deseas que se ejecute"<<endl;
	cout<<"a.- Saludar"	<<endl;
	cout<<"b.- despedirse" <<endl;
	cin >> opcion;
	
	opcion=tolower(opcion);	
	}
	
	while (opcion !='a' && opcion !='b');
	if (opcion == 'a')
	{
		cout<<" "<<endl;
		cout<<"Hola chicos"<<endl<<endl;		
	}
	
	if(opcion == 'b')
	{
		cout<<" "<<endl;
		cout<<"Hasta luego chicos"<<endl<<endl;
	}
	
	return 0;
	
}


