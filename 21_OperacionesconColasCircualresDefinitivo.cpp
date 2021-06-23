#include<iostream>

using namespace std;

class ColaCircular {
  private:
    int frente;
    int final;
    int arr[5];
    int itemContador;

  public:
    ColaCircular() {
      itemContador = 0;
      frente = -1;
      final = -1;
      for (int i = 0; i < 5; i++) {
        arr[i] = 0;
      }
    }
    bool colaVacia();
    bool colaLlena();
    void insertarElemento(int);
    int eliminarElemento();
    int numElementos();
    void mostrarCola();
};
  bool ColaCircular::colaVacia(){
    if (frente == -1 && final == -1)
      return true;
    else
      return false;
  }
  bool ColaCircular::colaLlena() {
    if ((final + 1) %5 == frente)
      return true;
    else
      return false;
  }
  void ColaCircular::insertarElemento(int val) {
    if (colaLlena()){
      cout << "Cola llena." << endl;
      return;
    }else if(colaVacia()) {
      final = 0;
      frente = 0;
      arr[final] = val;

    }else{
      final = (final + 1) % 5;
      arr[final] = val;
    }
    itemContador++;
  }

  int ColaCircular::eliminarElemento(){
    int x = 0;
    if (colaVacia()) {
      cout << "Cola vacía." << endl;
      return x;
    }else if(final == frente) {
      x = arr[final];
      final = -1;
      frente = -1;
      itemContador--;
      return x;
    }else{
      cout << "Elemento frente: " << frente << endl;
      x = arr[frente];
      arr[frente] = 0;
      frente = (frente + 1) % 5;
      itemContador--;
      return x;
    }
  }

  int ColaCircular::numElementos() {
    return (itemContador);
  }

  void ColaCircular::mostrarCola() {
    cout << "Los valores en la cola son: - " << endl;
    for (int i = 0; i < 5; i++) {
      cout << arr[i] << "  ";
    }
  }

int main() {
	
	
  ColaCircular cola1;
  int value, option;

  do{
    cout << "\n\n¿Que operación desea realizar? Ingrese el número de la opción. Pulse 0 para salir." << endl;
    cout << "1. insertarElemento()" << endl;
    cout << "2. eliminarElemento()" << endl;
    cout << "3. colaVacia()" << endl;
    cout << "4. colaLlena()" << endl;
    cout << "5. numElementos()" << endl;
    cout << "6. mostrarCola()" << endl;
    cout << "7. Limpiar pantalla." << endl << endl;
    cin >> option;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Encolar Operation \nIngresa el elemento a encolar : " << endl;
      cin >> value;
      cola1.insertarElemento(value);
      break;
    case 2:
      cout << "Desencolar Operation \nElemento desencolado : " << cola1.eliminarElemento() << endl;
      break;
    case 3:
      if (cola1.colaVacia())
        cout << "Cola vacía." << endl;
      else
        cout << "La cola no está vacía." << endl;
      break;
    case 4:
      if (cola1.colaLlena())
        cout << "Cola llena." << endl;
      else
        cout << "La cola no está llena." << endl;
      break;
    case 5:
      cout << "Número elementos \nNúmero de elemenntos en la cola : " << cola1.numElementos() << endl;
      break;
    case 6:
      cout << "Función mostrarCola llamada - " << endl;
      cola1.mostrarCola();
      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Ingresa una opción válida. " << endl;
    }

  } while (option != 0);

  return 0;
}