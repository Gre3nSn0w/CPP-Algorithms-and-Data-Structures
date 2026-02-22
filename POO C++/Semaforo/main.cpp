#include <iostream>
#include <windows.h>
using namespace std;

class Semaforo
{
public:
    void inicializar(int valor)
    {
        edo=valor;
    }
 
    void actualizar()
    {
        if(edo==0)
        {
            cout<<"Rojo"<<endl;
            Sleep(2000);
            edo++;
        }
    
        else if(edo==1)
        {
            cout<<"Verde"<<endl;
            Sleep(3000);
            edo++;
        }
    
        else
        {
            cout<<"Amarillo"<<endl;
            Sleep(1000);
            edo=0;
        }
    }
 
private:
    int edo;    
};

int main()
{
    Semaforo obj;
    obj.inicializar(0);
    
    while(1)
    {
        obj.actualizar();
    }
    
    return 0;
}
	
