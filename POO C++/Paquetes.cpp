//Hernandez Llanos Fernando - 2CV9
#include <iostream>
#include <string.h>
using namespace std;

class Paquete {
protected:
    string nombreEmisor;
    string direccionEmisor;
    string ciudadEmisor;
    string estadoEmisor;
    string codigoPostalEmisor;
    string nombreDestinatario;
    string direccionDestinatario;
    string ciudadDestinatario;
    string estadoDestinatario;
    string codigoPostalDestinatario;
    double peso;
    double costoPorKilogramo;

public:
    //Constructor
    Paquete() {
        nombreEmisor = "";
        direccionEmisor = "";
        ciudadEmisor = "";
        estadoEmisor = "";
        codigoPostalEmisor = "";
        nombreDestinatario = "";
        direccionDestinatario = "";
        ciudadDestinatario = "";
        estadoDestinatario = "";
        codigoPostalDestinatario = "";
        peso = 0.0;
        costoPorKilogramo = 0.0;    
    }

    //Destructor
    ~Paquete() {}

    double calcularCosto() {
        return peso * costoPorKilogramo;
    }

    void setPeso(double peso) {
        if (peso > 0.0)
            this->peso = peso;
        else
            this->peso = 0.0;
    }

    void setCostoPorKilogramo(double costo) {
        if (costo > 0.0)
            this->costoPorKilogramo = costo;
        else
            this->costoPorKilogramo = 0.0;
    }
};

class PaqueteDosDias : virtual public Paquete {
private:
    double cuotaDosDias;

public:
    //Constructor
    PaqueteDosDias(double cuota) : cuotaDosDias(cuota) {}

    //Destructor
    ~PaqueteDosDias() {}

    double calcularCosto() {
        return Paquete::calcularCosto() + cuotaDosDias;
    }
};

class PaqueteNocturno : virtual public Paquete {
private:
    double cuotaNocturnaPorKilo;

public:
    //Constructor
    PaqueteNocturno(double cuota) : cuotaNocturnaPorKilo(cuota) {}

    //Destructor
    ~PaqueteNocturno() {}

    double calcularCosto() {
        return Paquete::calcularCosto() + (peso * cuotaNocturnaPorKilo);
    }
};

class PaqueteEspecial : public PaqueteDosDias, public PaqueteNocturno {
public:
    //Constructor
    PaqueteEspecial(double cuotaDosDias, double cuotaNocturna) :
        Paquete(), PaqueteDosDias(cuotaDosDias), PaqueteNocturno(cuotaNocturna) {}

    //Destructor
    ~PaqueteEspecial() {}

    double calcularCosto() {
        return PaqueteDosDias::calcularCosto() + PaqueteNocturno::calcularCosto();
    }
};

int main() {
    //Objeto clase 'Paquete'
    Paquete paquete;
    paquete.setPeso(2.5);
    paquete.setCostoPorKilogramo(10.0);
    cout << "Costo del paquete: $" << paquete.calcularCosto() << endl;

    //Objeto clase 'PaqueteDosDias'
    PaqueteDosDias paqueteDosDias(50.0);
    paqueteDosDias.setPeso(2.5);
    paqueteDosDias.setCostoPorKilogramo(10.0);
    cout << "Costo del paquete de dos dias: $" << paqueteDosDias.calcularCosto() << endl;

    //Objeto clase 'PaqueteNocturno'
    PaqueteNocturno paqueteNocturno(5.0);
    paqueteNocturno.setPeso(2.5);
    paqueteNocturno.setCostoPorKilogramo(10.0);
    cout << "Costo del paquete nocturno: $" << paqueteNocturno.calcularCosto() << endl;

    //Objeto clase 'PaqueteEspecial'
    PaqueteEspecial paqueteEspecial(50.0, 5.0);
    paqueteEspecial.setPeso(2.5);
    paqueteEspecial.setCostoPorKilogramo(10.0);
    cout << "Costo del paquete especial: $" << paqueteEspecial.calcularCosto() << endl;

    return 0;
}

