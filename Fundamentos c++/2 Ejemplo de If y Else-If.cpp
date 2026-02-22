#include <iostream>
using namespace std;

int main()
{
	int cal=0;
	
	cout<<"Dame una calificación"<<endl;
	cin>>cal;
	
	if(cal >=6 && cal <=10)
	{
		cout<<"aprobado"<<endl;
	}
	else if((cal<0) || (cal>10))
	{
		cout<<"Fuera de rango"<<endl;		
	}
	   system("pause");
	   
	   return 0;
	
}

