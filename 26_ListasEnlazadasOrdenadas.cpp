#include <iostream>
#include <cstdlib>


using namespace std;

struct nodo{
    int dato /*dato2, auxint*/;
    nodo *next;
    nodo *anterior;
};
class cLista{
private:
    nodo *inicio, *fin, *aux, *i, *j;
    int contador; 

public:
    cLista();
    ~cLista();
    bool vacia();
    void aniadir();
    void recorrer();
    void quitarFinal();
    void quitarInicio();
    void ordenamientoBurbuja();
};

cLista::cLista(){
    inicio = NULL;
    contador = 0;
}
cLista::~cLista(){

}
bool cLista::vacia(){
    if (inicio==NULL){
        return true;
    }
    else{
        return false;
    }
}
void cLista::aniadir(){
    aux = new nodo;
    cout<<"Dame un número: ";
    cin>>aux->dato;
    aux->next=NULL;
    if (vacia())
    {
        inicio=fin=aux;
    }
    else
    {
        fin->next=aux;
        aux->anterior=fin; // agregada para quitar al inicio//
        fin=aux;
        //aux->dato2=fin->dato;
    }
    contador++;
}
void cLista::ordenamientoBurbuja(){
    i = inicio; 
    while(i != NULL){ 
        j = i->next;
        while(j != NULL){
            if(i->dato > j->dato){
                int aux = j->dato;
                j->dato=i->dato;
                i->dato=aux;
            }
            j=j->next;
        }
        i=i->next;
    }
    
    /*while(contador>=1 && aux->dato>aux->dato2 && contador==2){
        aux->auxint=aux->dato2;
        aux->dato2=aux->dato;
        aux->dato=aux->auxint;
    }
    contador--;*/
}
void cLista::recorrer(){
    if (vacia()){
        cout<<"No hay elementos en la lista"<<endl;
    }
    else{
        aux = inicio;
        cout<<"\n\n************ MUESTRA LA LISTA ************"<<endl;
        for (int i=1; i<=contador;i++){
            cout<<aux->dato<<" -> ";
            aux = aux->next;
        }
        cout<<"NULL"<<endl;
    }
}
void cLista::quitarInicio(){
    int elemento;

    if (vacia()){
        cout<<"No hay elementos en la lista"<<endl;
    }
    else{
        aux = inicio;
        elemento = aux->dato;
        inicio = inicio->next;
        delete aux;
        cout<<"El elemento borrado fue: "<<elemento<<endl;
        contador--;
    }
}
void cLista::quitarFinal(){
    int elemento;
    
    if(vacia()){
        cout << "No hay elementos en la lista." << endl;
    }else{
        aux = fin;
        elemento = aux-> dato;
        fin = fin->anterior;
        delete aux; 
        cout << "El elemento borrado fue: " << elemento<<endl;
        contador--;
    }

}
int main(){
    cLista objeto1;
    
    
    
    int opcion=0;
    do{
        cout << "\n\n\tMenú de opciones.\n1) Insertar número.\n2) Eliminar elemento al inicio de la lista."
                "\n3) Eliminar elemento al final de la lista.\n4) Imprimir Lista.\n5) Limpiar pantalla." << endl;
        cout << "Opción-> ";
        cin >> opcion;
        switch(opcion){
            case 1:{
                objeto1.aniadir();
                //objeto1.ordenamientoBurbuja();
                break;
            }
            case 2:{
                objeto1.quitarInicio();
                break;
            }
            case 3:{
                objeto1.quitarFinal();
                break;
            }
            case 4:{
                objeto1.recorrer();
                break;
            }
            case 5:{
                system("clear");
                break;
            }
            case 6:{
                default:{
                cout << "Ingrese una opción válida." <<endl;
                }
            }
        }
        
    }while(opcion!=0);

    return 0;
}