#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/*
 Diseñar e implementar un TAD que lea los valores de los catetos de un triángulo 
 rectángulo y calcule el valor de la hipotenusa, el área y el perímetro del 
 triángulo mediante las siguientes expresiones:
 */

class Triangulo{
private: 
    int base;
    int altura;
public:
    void obtener();
    float hipotenusa();
    float perimetro();
    float area();
    Triangulo();
    ~Triangulo();
};

Triangulo::Triangulo(){

}

Triangulo::~Triangulo(){

}
void Triangulo::obtener(){
    cout << "Ingrese la base del triángulo: " << endl;
    cin >> base;
    cout << "Ingrese el altura del triángulo: " << endl;
    cin >> altura;
}
float Triangulo::hipotenusa(){
    float hip=0, res=0;
    hip=(base*base)+(altura*altura);
    res= sqrt(hip);
    return res;
}
float Triangulo::perimetro(){
    float hip=0, peri=0;
    hip=(base*base)+(altura*altura);
    peri=base+altura+sqrt(hip);
    return peri;
}
float Triangulo::area(){
    float a=0;
    a=base*altura/2;
    return a;
}

int main(int argc, char** argv) {
    
    Triangulo objeto1;
    
    objeto1.obtener();
    
    cout << "Hipotenusa del triángulo: " << objeto1.hipotenusa() << endl;
    cout << "Perimetro del triángulo: " << objeto1.perimetro() << endl;
    cout << "Area del triángulo: " << objeto1.area() << endl;
    

    return 0;
}

