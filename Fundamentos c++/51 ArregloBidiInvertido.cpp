#include <iostream>
using namespace std;

int main()
{
	int Matriz[3][3];
	
	for(int k=0; k<3; k++)
	{
		for(int i=0; i<3; i++)
		{
			cout<<"Dame un numero"<<endl;
			cin>>Matriz[k][i];			
		}
	}
	
	system("cls");
	
	for(int m=0; m<3; m++)
	{
		for(int n=0; n<3; n++)
		{
			cout<<Matriz[m][n]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<endl;
	
	for(int i=0; i<3; i++)
	{
		for(int j=2; j>=0; j--)
		{
			cout<<Matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<endl;

    system("pause");
    return 0;
}
