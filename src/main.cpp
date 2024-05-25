#include <iostream>
#include "../include/Producto.h"
#include "../include/Cliente.h"
#include "../include/LectorDeArchivos.h"
#include "../include/Funciones.h"

using namespace std;

int main() {   
    LectorDeArchivos* lector;
    lector -> leerArchCliente();
    Bodega* bodega = lector -> leerArchProducto(bodega);
    
    Funciones* funciones;
    string* data = new string;
    int* opcion = new int;

    do {
        funciones -> imprimirMenu();
        getline(cin, *data);

        *opcion = funciones -> validarOpcion(*data);

        switch (*opcion) {
        case 1:{break;}
        case 2:{break;}
        case 3:{break;}
        case 4:{break;}
        case 5:{break;}
        case 6:{break;}
        default:
            cout << "-------Opcion Invalidad-------" << endl;
            break;
        }

    } while (*opcion != 6);

    
    //Pruebas de Bodega
    bodega -> imprimirCategorias();
    bodega -> imprimirSubCategorias("Pepe");
    bodega -> imprimirProductos("Dulce","Galleta");

    delete lector;
    delete funciones;
    delete bodega;
    return 0;
}
