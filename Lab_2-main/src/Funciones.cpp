#include "../include/Funciones.h"
#include "Fila.h"
using namespace std;

Funciones::Funciones() {}

void Funciones::imprimirMenu() {
    cout << "------Menu Usuario------" << endl;
    cout << "[1] Entregar Numeros" << endl;
    cout << "[2] Llamar al siguiente Cliente" << endl;
    cout << "[3] Ingresar Cliente a la Cola" << endl;
    cout << "[4] Agregar Productos a Bodega" << endl;
    cout << "[5] Generar boletas de Venta" << endl;
    cout << "[6] Salir" << endl;
    cout << "Opcion: ";
}

int Funciones::validarOpcion(string opcion) {
    try{
        if (opcion.empty()) {
            throw invalid_argument("Entrada vacia");
        }
        int i = std::stoi(opcion);
        return i;
        }
    catch(std::invalid_argument const &e){
        cout << "Ingrese un dato valido:";
        getline(cin, opcion);
        //cin >> opcion;
        return validarOpcion(opcion);
        }
    catch(std::out_of_range const &e){
        cout << "El numero esta fuera de rango. Ingrese un dato valido:";
        getline(cin, opcion);
        //cin >> opcion;
        return validarOpcion(opcion);
        }
}

Funciones::~Funciones() {}