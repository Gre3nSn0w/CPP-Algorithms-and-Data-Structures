#include <iostream>
#include <string>
using namespace std;

class EquipoPesado{
	private:
		string nombre; 
		string fabricante;
		double peso; 
		double costo;
    public:
    	EquipoPesado(string nom, string fbrc, double pso, double cost) //constructor
		{
			nombre=nom;
			fabricante=fbrc;
			peso=pso;
			costo=cost;
		}
		
		void ShowInfo()
		{		
		  cout<<"Nombre: "<<nombre<<endl;
          cout<<"Fabricante: "<<fabricante<<endl;
          cout<<"Peso: "<<peso<<" kg"<<endl;
          cout<<"Costo: $"<<costo<<endl;   
		}
	
	~EquipoPesado(){}//destructor
};

class BombCentrif:public EquipoPesado{
	private:
		double DIP;
		int NumH;
		string EDR;
	public:
		BombCentrif(string nom, string fbrc, double pso, double cost, double Bdip, int BnumH, string edr)
		:EquipoPesado(nom, fbrc, pso, cost) //constructor y herencia
		{
			DIP=Bdip;
			NumH=BnumH;
			EDR=edr;
	    }	
	    
	     void ShowInfo()  
		  {
          EquipoPesado::ShowInfo();
          cout<<"Tipo: Bomba centrifuga"<<endl;
          cout<<"Diametro del impulsor: "<<DIP<<" cm"<<endl;
          cout<<"Numero de hojas: "<<NumH<<endl;
          cout<<"Eje de rotacion: "<<EDR<<endl;
          }	
    ~BombCentrif(){}//destructor
};

class BombDiafrag:public EquipoPesado{
	private:
		string MF;
	public:
	BombDiafrag(string nom, string fbrc, double pso, double cost, string BDmf)	
	:EquipoPesado(nom, fbrc, pso, cost)//constructor y herencia
	{
		MF=BDmf;
	}
	
	void ShowInfo()  
		{
          EquipoPesado::ShowInfo();
          cout<<"Tipo: Bomba de diafragma"<<endl;
          cout<<"Material del diafragma: "<<MF<<endl;
        }	
    ~BombDiafrag(){}//destructor
};

class BombPiston:public EquipoPesado{
	private:
		double LongP;
	    double Diam;
	    int NumC;
	public:
		BombPiston(string nom, string fbrc, double pso, double cost, double LP, double d, int nc)
		:EquipoPesado(nom, fbrc, pso, cost)//constructor y herencia
	    {
	    	LongP=LP;
		    Diam=d;
		    NumC=nc;	
	    }
	
	void ShowInfo()  
		{
          EquipoPesado::ShowInfo();
          cout<<"Tipo: Bomba de piston"<<endl;
          cout<<"Longitud del piston: "<<LongP<<endl;
          cout<<"Diametro: "<<Diam<<endl;
          cout<<"Numero de cilindros: "<<NumC<<endl;
        }
	~BombPiston(){}//destructor
};

class TanqEsf:public EquipoPesado{
	private:
		double Diam;
	public:
		TanqEsf(string nom, string fbrc, double pso, double cost, double DM)
		:EquipoPesado(nom, fbrc, pso, cost)//constructor y herencia
		{
			Diam=DM;
		}
		
	void ShowInfo()  
		{
          EquipoPesado::ShowInfo();
          cout<<"Tipo: Tanque esferico"<<endl;  
		  cout<<"Diametro: "<<Diam<<" cm"<<endl; 
        }
    ~TanqEsf(){}//destructor
};

class TanqPres:public EquipoPesado{
	private:
		double diam;
		double alt;
	public:
		TanqPres(string nom, string fbrc, double pso, double cost, double dm, double ALT)
		:EquipoPesado(nom, fbrc, pso, cost)//constructor y herencia
		{
			diam=dm;
			alt=ALT;
		}
		
		void ShowInfo()  
		{
          EquipoPesado::ShowInfo();
          cout<<"Tipo: Tanque a presion"<<endl;  
		  cout<<"Diametro: "<<diam<<" cm"<<endl; 
		  cout<<"Altura: "<<alt<<" cm"<<endl;
        }
    ~TanqPres(){}//destructor
};
	
	
int main()
{
	//Bombas
	BombCentrif obj("BP1ME100", "SEGUAS", 100.5, 2500, 1.5, 10, "Vertical");
    obj.ShowInfo();
    cout<<endl;//SALTO DE LINEA--------------------------------------------
    BombDiafrag obj2("QBK40", "VEVOR", 75, 3400, "Teflon");
    obj2.ShowInfo();
    cout<<endl;//SALTO DE LINEA--------------------------------------------
    BombPiston obj3("PC200-5", "WAGNER", 120, 5900, 30, 10, 4);
    obj3.ShowInfo();
    cout<<endl;//SALTO DE LINEA--------------------------------------------
    
    //Tanques
    TanqEsf obj4("45529-HO", "VOLLMER", 800, 8250, 150);
    obj4.ShowInfo();
    cout<<endl;//SALTO DE LINEA--------------------------------------------
    TanqPres obj5("ePX3050", "SACOME", 1000, 9799.99, 120, 200);
    obj5.ShowInfo();
    return 0;
}
