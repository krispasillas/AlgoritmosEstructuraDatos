#include <cstdlib>
#include <iostream>

using namespace std;

class Busqueda {
private: 
    int datos[9]={1,3,4,5,6,7,9,11,13};
public: 
    void mostrar(string);
    void seleccion();
    void secuencial(int);
    void binaria(int);
    Busqueda();
    ~Busqueda();
};

// Constructor.//
Busqueda::Busqueda(){
}

// Destructor.//
Busqueda::~Busqueda(){
}

// Muestra los datos (desordenados, luego ordenados).//
void Busqueda::mostrar(string _estado)
{
    int i;
    cout<<"Los valores "<<_estado<<" del arreglo son : {";
    for (i=0;i<8;i++)
    {
        cout<<datos[i]<<", ";
    }
    cout<<datos[8]<<"}"<<endl;
}

// Método de ordenamiento.//
void Busqueda::seleccion()
{
    int i, j, aux, minimo;
    for (i=0; i<=8; i++)
    {
        minimo=i;
        for (j=i+1; j<=8; j++)
        {
            if (datos[j]<datos[minimo])
            {
                minimo = j;
            }
        }
        aux=datos[i];
        datos[i]=datos[minimo];
        datos[minimo]=aux;
    }
}

// Método secuencial de búsqueda.//
void Busqueda::secuencial(int dato){
    int i = 0;
    int vueltas = 0;
    char flag = 'F';
    while ((flag=='F')&&(i<9)){
        
        if (datos[i]>=dato){
            flag='F';
            
            if (datos[i]==dato){
                flag = 'V';
            }
            break;
        }
        i++;
        vueltas++;
    }
    if (flag=='F'){
        cout << "El dato "<<dato<<" no existe en el arreglo" << endl;
        cout << "Me tomó: "<< vueltas << " vueltas. " << endl;
    }
    else{
        cout << "El dato: "<<dato<<" se encuentra en la posición ["<<i<<"] del arreglo." << endl;
        cout << "Me tomó: "<< vueltas << " vueltas. " << endl;
    }
}

//Método de búsqueda binaria//
void Busqueda::binaria(int dato){
    int inicio=0, medio=0, fin=9;
    int vueltas=0;
    char flag = 'F';
    
    while (inicio <= fin){
        medio = (inicio+fin)/2;
        
            if (datos[medio] == dato){
            flag='V';
            break;
        }
            if (datos[medio] > dato){
            fin=medio-1;
            medio =(inicio+fin)/2;
        }
            if (datos[medio] < dato){
            inicio=medio+1;
            medio=(inicio+fin)/2;
        }
        vueltas++;
    }
    if (flag == 'V'){
        cout << "El dato: "<<dato<<" se encuentra en la posición ["<<medio<<"] del arreglo." << endl;
        cout << "Me tomó: "<< vueltas << " vueltas. " << endl;
    }
    else{
        cout << "El dato "<<dato<<" no existe en el arreglo" << endl;
        cout << "Me tomó: "<< vueltas << " vueltas. " << endl;
    }
}

int main(int argc, char** argv) {
    Busqueda objeto1;
    
    objeto1.mostrar("desordenados");
    objeto1.seleccion();
    objeto1.mostrar("ordenados");
 
    
    int numero;
    cout << "\n\tDigite el dato que desea buscar (está usando el método secuencial): " ;
    cin >> numero;
    objeto1.secuencial(numero);
    cout << "\n\tDigite el dato que desea buscar (está usando el método binario): " ;
    cin >> numero;
    objeto1.binaria(numero);
    return 0;
}
