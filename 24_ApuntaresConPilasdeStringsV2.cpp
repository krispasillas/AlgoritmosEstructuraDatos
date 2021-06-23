#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class CppApuntadoresConColasV2{
private:
    string frases [3];
    string *puntero=0;
    int *punterotope=0;
    int tope;
public: 
    void obtenerFrases(string);
    void mostrarFrases();
    void sacarElemento();
    
    CppApuntadoresConColasV2();
    ~CppApuntadoresConColasV2();
};
// Constructor
CppApuntadoresConColasV2::CppApuntadoresConColasV2(){
    tope=-1;
}
// Destructor
CppApuntadoresConColasV2::~CppApuntadoresConColasV2(){
}
void CppApuntadoresConColasV2::obtenerFrases(string dato){
    if(tope<2){
        punterotope=&tope;
        (*punterotope)++; // sumamos una unidad a tope por medio del puntero.
        frases[*punterotope]=dato;
        //cin >> frases [*punterotope];
        getline(cin, frases[*punterotope]);
        cout << "\n\t -> La frase se agregó correctamente.\n\n";
    }else{
        cout << "La pila está llena." << endl;
    }
}

void CppApuntadoresConColasV2::mostrarFrases(){
    if(tope>-1){
        int i=tope; // contador
        for(puntero=&frases[tope]; i>-1; puntero--){ // uso de apuntadores para recorrer
            cout << "- " << *puntero << endl; // impresión
            i--; // contador
        }
    }else{
        cout << "\n\t~No hay ninguna frase por mostrar.~" <<endl<<endl;
    }
}

void CppApuntadoresConColasV2::sacarElemento(){
    if(tope>-1){
        (*punterotope)--; // restamos una unidad a tope por medio del puntero.
        cout << "Se eliminó correctamente la frase: "<< frases[*punterotope+1] << "."<< endl;
    }else{
        cout << "\n\t~No se pudo eliminar ningun elemento, la pila está vacía.~" << endl;
    }
}
int main(int argc, char** argv) {

    CppApuntadoresConColasV2 objeto1; //objeto
    string datos;
// Menú de opciones
    int opcion=0;
    do{
        cout << "\n\t¿Qué desea hacer? Ingrese una opción o pulse cero para salir." << endl;
        cout << "1) Insertar frase.\n2) Eliminar frase.\n3) Imprimir frase(s). \n4) Limpiar pantalla." <<endl<<endl;
        cout << "Opción -> ";
        cin >> opcion;
        
        switch(opcion){
            case 1:{
                cout << "Ingrese la frase: ";
                getline(cin,datos);
                objeto1.obtenerFrases(datos);
                break;
            }
            case 2:{
                objeto1.sacarElemento();
                break;
            }
            case 3:{
                objeto1.mostrarFrases();
                break;
            }
            case 4:{
                system("clear");
                break;
            }
            default:{
                cout << "Ingrese una opción válida." <<endl;
            }
        }
    }while(opcion!=0);
    
    return 0;
}