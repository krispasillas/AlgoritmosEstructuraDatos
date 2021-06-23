#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>



# define max 5


using namespace std;

class CppPila{
public:
    int datos [max];
    int tope=-1;
public:
    void InsertarElemento();
    void SacarElemento();
    void EstadoPila();
    void MostrarPila();
    void MostrarTopePila();
    CppPila();
    ~CppPila();
};
// Constructor//
CppPila::CppPila(){
}
// Desctructor//
CppPila::~CppPila(){
}
void CppPila::InsertarElemento(){
    if(tope<5){ // Caso pila sin llenar.//
        cout << "Inserte el elemento a agregar a la pila: "<<endl<<"->";
        cin >> datos[tope+1];
        tope++;
        cout << "El elemento se ha agregado"<<endl<<endl;
        cin.get(); // alternative sistem pause//
    }else{
        cout << "Pila llena, no se pueden insertal elementos."<<endl<<endl;
        cin.get(); // alternative sistem pause//
    }
}
void CppPila::SacarElemento(){
    if(tope>-1){ // Caso pila vacía.//
        tope--;
        cout << "Se eliminó un elemento de la fila"<<endl<<"Se elimino elemento: "<< datos[tope+1]<<endl;
        cin.get(); // alternative sistem pause//
    }else{
        cout << "No se pueden eliminar datos, la pila está vacía."<<endl;
        cin.get(); // alternative sistem pause//
    }
}
void CppPila::EstadoPila(){
    if(tope==-1){
        cout << "La pila está vacía."<<endl<<endl;
        cin.get(); // alternative sistem pause//
    }else{
        cout << "La pila no está vacía."<<endl<<endl;
        cin.get(); // alternative sistem pause//
    }
}
void CppPila::MostrarPila(){
    if(tope>-1){
        cout << "\t[ ";
        for(int i=tope; i>-1; i--){
            cout <<datos[i]<<" , ";
        }
        cout << "FIN ]";
        cin.get(); // alternative sisteme pause//
    }else{
        cout << "La pila etá vacía." <<endl<<endl;
        cin.get(); // alternative sisteme pause//
    }
}
void CppPila::MostrarTopePila(){
    if(tope==-1){
        cout << "La pila está vacía, no tiene tope."<<endl<<endl;
        cin.get(); // alternative sisteme pause//
    }else{
        cout << "El tope de la pila es: "<<datos[tope]<<"."<<endl<<endl;
    }
}


int main(int argc, char** argv) {

    CppPila objeto1;
    
    // Menú de opciones//
    int opcion;
    do{
        //cout<<"\x1B[2J\x1B[0;0f";//
        cout << "\n\tPrograma de operaciones con Pilas.\n";
        cout << "\t---Menú---"<<endl;
        cout <<"1) Insertar Elementos."<<endl;
        cout <<"2) Sacar Elementos."<<endl;
        cout <<"3) Estado de la Pila (llena o vacía)."<<endl;
        cout <<"4) Mostrar Pila."<<endl;
        cout <<"5) Mostrar tope de la Pila."<<endl;
        cout <<"6) Salir."<<endl<<endl<<"->";
        cin >> opcion;
        
        switch(opcion){
            case 1:{
                objeto1.InsertarElemento();
                break;
            }
            case 2:{
                objeto1.SacarElemento();
                break;
            }
            case 3:{
                objeto1.EstadoPila();
                break;
            }
            case 4:{
                objeto1.MostrarPila();
                break;
            }
            case 5:{
                objeto1.MostrarTopePila();
                break;
            }
            case 6:{
                break;
            }
            default:
                cout << "Ingrese una opción válida."<< endl;
                cin.get(); // alternative sisteme pause//
        }
        
    }while(opcion!=6);
    
    return 0;
}