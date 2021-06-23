#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/*
 Diseñar e implementar un TAD que calcule el área y perímetro de triángulo 
 rectángulo (base y altura)
 */

class Triangulo{

private: 
    int base;
    int altura;

public:
    void obtener();
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
float Triangulo::perimetro(){
    float hip=0, p=0;
    hip=(base*base)+(altura*altura);
    p=base+altura+sqrt(hip);
    return p;
}
float Triangulo::area(){
    float a=0;
    a=base*altura/2;
    return a;
}

int main(int argc, char** argv) {
    
    Triangulo objeto1;
    
    objeto1.obtener();
    
    cout << "Perimetro del triángulo rectángulo: " << objeto1.perimetro() << endl;
    cout << "Area del triángulo rectángulo: " << objeto1.area() << endl;
    
    

    return 0;
}

