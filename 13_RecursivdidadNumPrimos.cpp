#include <cstdlib>
#include<iostream>

using namespace std;

class RecursPrimos{
public: 
    void NumPri(int);
};
void RecursPrimos::NumPri(int n){
    if (n%2!=0)
        cout << "El " <<n<< " es primo." ;
    else 
        cout << "El número " <<n<< " no es primo.";
}

int main(int argc, char** argv) {

    RecursPrimos objeto1;
    int numero=0;
    
    cout << "Ingrese el número que desea evaluar: ";
    cin >> numero;
    objeto1.NumPri(numero);
    
    return 0;
}
