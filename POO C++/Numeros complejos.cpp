//Hernandez Llanos Fernando - 2CV9
#include <iostream>
using namespace std;

class Complejo {
private:
    double real;
    double imaginario;

public:
    Complejo() 
	{
        real = 0.0;
        imaginario = 0.0;
    }

    Complejo(double real, double imaginario) {
        this->real = real;
        this->imaginario = imaginario;
    }

    Complejo operator+(const Complejo& otro) {
        Complejo resultado;
        resultado.real = real + otro.real;
        resultado.imaginario = imaginario + otro.imaginario;
        return resultado;
    }

    Complejo operator-(const Complejo& otro) {
        Complejo resultado;
        resultado.real = real - otro.real;
        resultado.imaginario = imaginario - otro.imaginario;
        return resultado;
    }

    Complejo operator*(const Complejo& otro) {
        Complejo resultado;
        resultado.real = (real * otro.real) - (imaginario * otro.imaginario);
        resultado.imaginario = (real * otro.imaginario) + (imaginario * otro.real);
        return resultado;
    }

    double getReal() const {
        return real;
    }

    double getImaginario() const {
        return imaginario;
    }

    void setReal(double real) {
        this->real = real;
    }

    void setImaginario(double imaginario) {
        this->imaginario = imaginario;
    }
};

int main() 
{
    Complejo a, b, c;

    double real, imaginario;

    cout<<"Ingresa la parte real del primer complejo: ";
    cin>>real;
    a.setReal(real);

    cout<<"Ingresa la parte imaginaria del primer complejo: ";
    cin >> imaginario;
    a.setImaginario(imaginario);
    
    cout<<endl;

    cout<<"Ingresa la parte real del segundo complejo: ";
    cin>>real;
    b.setReal(real);

    cout<<"Ingresa la parte imaginaria del segundo complejo: ";
    cin>>imaginario;
    b.setImaginario(imaginario);
    
    cout<<endl;

    c=a+b;
    cout<<"Suma: "<<c.getReal()<<" + "<<c.getImaginario()<<"i"<<endl;

    c=a-b;
    cout<<"Resta: "<<c.getReal()<<" + "<<c.getImaginario()<<"i"<<endl;

    c=a*b;
    cout<<"Producto: "<<c.getReal()<<" + "<<c.getImaginario()<<"i"<<endl;

    return 0;
}

