#include <cstdlib>
#include <iostream>
#include <cstring>
#include<string.h>
#include <stdio.h>

#define max 100

using namespace std;

class CppPalindromo{
private:
    char Palindromo[max];
    char copiaPalindromo[max]; 
    int tope;
    int j;
public:
    void llenarCadena();
    void evaluarCadena();
    CppPalindromo();
    ~CppPalindromo();
};
// Constructor
CppPalindromo::CppPalindromo(){
    tope=-1;
    j=0;
    
}
// Destructor
CppPalindromo::~CppPalindromo(){

}

void CppPalindromo::llenarCadena(){
    cout << "Ingrese letra: " << endl;
    cin >> Palindromo[tope+1];
    tope++;
}
void CppPalindromo::evaluarCadena(){
    // copia de cadenas.

    for(int i=tope; i>=0; i--){
            copiaPalindromo[j]=Palindromo[i];
            j++;
    }

// comparación de cadenas.
    if(Palindromo==copiaPalindromo){
        cout << "\n\tLa frase/palabra es palindroma.";
    }else{
        cout << "\n\tLa frase/palabra no es palindroma.";
    }
// impresión de cadenas.
    cout << "\n\nFrase inicial: ";
    for (int i=0; i<=tope; i++){
        cout << "" << Palindromo[i];
    }

    cout << "\nFrase al reves: ";
    for (int i=0; i<=tope; i++){
        cout << "" << copiaPalindromo[i];
}
    cout << endl << endl;
}


int main(int argc, char** argv) {
    CppPalindromo Palindromo1;
    int opcion=0;
    do{
        
    cout <<"\n\t¿Qué desea hacer?"<<endl<<endl;
    cout <<"1) Agregar letra.\n2) Evaluar (es palindromo o no).\n3) Limpiar pantalla.\n4) Presione 0 para salir. " << endl << endl;
    cout <<"NOTA: No agregue espacios, mayúsculas, ni tildes." << endl << endl;
    cout << "Opción -> ";
    cin >> opcion;
    
        switch(opcion){
            case 1:{
                Palindromo1.llenarCadena();
                break;
            }
            case 2:{
                Palindromo1.evaluarCadena();
                break;
            }
            case 3:{
                system("clear");
                break;
            }
            default:
                cout << "Ingresa una opción válida. " << endl;
    }
    }while(opcion!=0);
    
    return 0;
}