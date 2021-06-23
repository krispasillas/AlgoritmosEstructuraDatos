#include <iostream>
#include <cstdlib>


using namespace std;

struct nodo{
    int dato;
    nodo *next;
};
class cLista{
private:
    nodo *lista, *fin, *aux;
    int contador;

public:
    cLista();
    ~cLista();
    bool vacia();
    void aniadir();
    void recorrer();
    void quitar();
};

cLista::cLista(){
    lista = NULL;
    contador = 0;
}
cLista::~cLista(){

}
bool cLista::vacia(){
    if (lista==NULL){
        return true;
    }
    else{
        return false;
    }
}
void cLista::aniadir()
{
    aux = new nodo;
    cout<<"Dame un número: ";
    cin>>aux->dato;
    aux->next=NULL;
    if (vacia())
    {
        lista=fin=aux;
    }
    else
    {
        fin->next=aux;
        fin=aux;
    }
    contador++;
}
void cLista::recorrer(){
    if (vacia()){
        cout<<"No hay elementos en la lista"<<endl;
    }
    else{
        aux = lista;
        cout<<"************ MUESTRA LA LISTA ************"<<endl;
        for (int i=1; i<=contador;i++){
            cout<<aux->dato<<"-->";
            aux = aux->next;
        }
        cout<<"NULL"<<endl;
    }
}
void cLista::quitar(){
    int elemento;

    if (vacia()){
        cout<<"No hay elementos en la lista"<<endl;
    }
    else{
        aux = lista;
        elemento = aux->dato;
        lista = lista->next;
        delete aux;
        cout<<"El elemento borrado fue: "<<elemento<<endl;
        contador--;
    }
}
int main(){
    cLista objeto1;
    // Menú 
    int opcion=0;
    do{
        cout << "\n\n\tMenú de opciones.\n1) Insertar número.\n2) Eliminar elemento.\n3) Imprimir Lista.\n4) Limpiar pantalla." << endl;
        cout << "Opción-> ";
        cin >> opcion;
        switch(opcion){
            case 1:{
                objeto1.aniadir();
                break;
            }
            case 2:{
                objeto1.quitar();
                break;
            }
            case 3:{
                objeto1.recorrer();
                break;
            }
            case 4:{
                system("clear");
                break;
            }
            case 5:{
                default:{
                cout << "Ingrese una opción válida." <<endl;
                }
            }
        }
        
    }while(opcion!=0);

    return 0;
}