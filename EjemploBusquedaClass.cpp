#include <cstdlib>
#include <iostream>

using namespace std;

/*
 Programa que realiza unabusqueda en entre diferentes arreglos
 */

class Busqueda
{
private:
    int datos[5] = {4,12,3,52,1};
public:
    void secuencial(int);
    Busqueda();
    ~Busqueda();
};
//Constructor
Busqueda::Busqueda()
{

}
//Destructor
Busqueda::~Busqueda()
{

}
void Busqueda::secuencial(int dato)
{
    int i;
    char flag = 'F';
    i = 0;
    while ((flag=='F')&&(i<5))
    {
        if (datos[i]==dato)
        {
            flag='V';
        }
        i++;
    }
    if (flag=='F')
    {
        cout<<"El dato: "<<dato<<" no existe en el arreglo";
    }
    else
    {
        cout<<"El dato: "<<dato<<" se encuentra en la posicion ["<<i-1<<"] del arreglo";
    }
}
int main()
{
    Busqueda objeto1;
    int numero;
    cout<<"Que dato deseas buscar?";
    cin>>numero;
    objeto1.secuencial(numero);
    return 0;
}