#include <iostream>
using namespace std;

int main() 
{
	//operadores aritmeticos

    int a = 10;
    int b = 3;
    int c = 0;
    float x = 2.5;
    float y = 0;
    
    y=x+a;
    cout<<"El valor de y es:"<<y<<endl<<endl;
    
    c=a/b;
    cout<<"El valor de c es:"<<c<<endl<<endl;

    c=a%b;
    cout<<"El valor de c es:"<<c<<endl<<endl;
    
    y=a/b;
    cout<<"El valor de y es:"<<y<<endl<<endl;    
    
    //Operadores logicos
    
    int p = 0;
    int q = 1;
    
    if(p && q)
    {
    	cout<<"El resultado para and fue true osea 1"<<endl<<endl;		    	
	}
	
	if(p || q)
	{
		cout<<"El resultado para or fue true osea 1"<<endl<<endl;
	}
	
	if(!p || !q)
	{
		cout<<"El resulado para negacion fue verdadero"<<endl<<endl;		
	}
	
	
	//Operadores de relacion
	int k = 14;
	float l = 10;
	
	if(k<=l)
	{
		cout<<"k es menor que l"<<endl<<endl;		
	}
	
	if(k>=l)
	{
		cout<<"k es mayor que l"<<endl<<endl;
	}
	
	if(k == l)
	{
		cout<<"k es igual que l"<<endl<<endl;		
	}
	
	system("pause");
	return 0;
		
}



