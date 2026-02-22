#include <iostream>
using namespace std;

class cuenta{
	private:
		float saldo;
	
	public:
		void set_abonar(float monto);
		void set_cargar(float monto);
		float get_obtenerSaldo();
		cuenta();
		~cuenta();
		
};

cuenta :: cuenta(){	
	cout<<"Inserte saldo inicial: ";
	cin>>saldo;
	
	if(saldo<0)
	{
		cout<<endl;
		cout<<"ERROR. Saldo inicial invalido, se le asignara un saldo con valor 0"<<endl<<endl;
		saldo = 0;
		system ("PAUSE");
	}
}

cuenta ::~cuenta()
{
	system("cls");
	cout<<endl<<"Operacion Terminada"<<endl<<endl;
	system("pause");	
}

void cuenta :: set_abonar(float monto)
{
	cout<<"Inserte monto para abonar: "<<endl;
	cin>>monto;
	saldo += monto;
}

void cuenta :: set_cargar(float monto)
{
	cout<<"Inserte monto para retirar: "<<endl;
	cin>>monto;
	
	if (monto>saldo)
	{
		do{
			cout<<"ERROR. Monto incorrecto vuelva a insertar monto: ";
			cin>>monto;
			cout<<endl;
		}while (monto > saldo || monto < 0);
	}
	
	saldo -= monto;
}

float cuenta :: get_obtenerSaldo()
{
	system("cls");
	return (saldo);
}


void dinamico(){
	
	for (int i=0; i<2; i++)
	{
	system ("cls");
	cuenta *c1 = new cuenta();
	cout<<endl;
	
	int opcion;
	cout << "Elija una operacion tecleando el numero: " << endl << endl;
 	cout << "1.- Abonar " << endl;
 	cout << "2.- Retirar" << endl;
	
	cin >> opcion;
	if (opcion<1 || opcion>2)
	{
		do{
			cout<<"Inserte accion correcta"<<endl;
			cin >> opcion;
		} while (opcion<1 || opcion>2);
	}
	
	 switch (opcion)
	 {
		 case 1:
 		{
 			system ("cls");
 			c1->set_abonar(0);
 			break;
 		}
 		case 2:
 		{
 			system ("cls");
			c1->set_cargar(0);
			break;
		}
	 }	
	cout<<"Saldo: "<<c1->get_obtenerSaldo()<<endl;
	cout<<endl;
	system("PAUSE");
	delete(c1);
	}
}

int main (int argc, char *argv[])
{
	dinamico();
	return 0;
}


