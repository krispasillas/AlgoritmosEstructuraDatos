#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/*
 El sueldo de un empleado de la empresa “La Bodeguita” es de la suma de su sueldo 
 mensual  más 4% de comisión sobre las ventas mensuales realizadas; después al 
 total obtenido hay que descontarle un 16% de IVA. Realizar un TAD e 
 implementarlo (C++) para que permita sacar el sueldo neto al mes sabiendo que 
 debe solicitar las ventas y el sueldo mensual.
 */

class SueldoEmpleado{
private: 
    float Sueldo;
    int Ventas;
public:
    void Obtener();
    float SueldoNeto();
    SueldoEmpleado();
    ~SueldoEmpleado();
    
};

SueldoEmpleado::SueldoEmpleado(){

}

SueldoEmpleado::~SueldoEmpleado(){

}
void SueldoEmpleado::Obtener(){
    cout <<"Ingrese el sueldo mensual del empleado: ";
    cin >> Sueldo;
    cout <<"Ingrese las ventas mesuales realizadas: ";
    cin >> Ventas;
}
float SueldoEmpleado::SueldoNeto(){
    float ResVentas, iva, ResFinal;
    ResVentas = (Sueldo*0.04*Ventas)+Sueldo;
    iva = ResVentas*0.16;
    ResFinal = ResVentas-iva;
    return ResFinal;
}

int main(int argc, char** argv) {
    
    SueldoEmpleado Empleado1;

    Empleado1.Obtener();
    
    cout << "Descontando el 16% del iva, el sueldo neto del Empleado es de: $" << Empleado1.SueldoNeto() << endl;
    

    return 0;
}

