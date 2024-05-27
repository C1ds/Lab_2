#include <iostream>
#include "../include/Producto.h"
#include "../include/Cliente.h"
#include "../include/LectorDeArchivos.h"
#include "../include/Funciones.h"
#include "../include/ListaDeFilas.h"
#include "../include/EscribirArch.h"


using namespace std; 

int main() {   
    LectorDeArchivos* lector = new LectorDeArchivos();
    Funciones* funciones = new Funciones();
   // LectorDeArchivos* lector;
   ListaDeFilas listaDeFilas= lector -> leerArchCliente(); 
    
    Bodega* bodega = new Bodega();
    bodega = lector -> leerArchProducto(bodega);
    //Funciones* funciones;
    string* data = new string;
    int* opcion = new int;
    Cliente actual = listaDeFilas.getNextCliente();
/*
    cout << "[1] Entregar Numeros" << endl;
    cout << "[4] Agregar Productos a Bodega" << endl;
    cout << "[5] Generar boletas de Venta" << endl;
*/
    do {
        funciones -> imprimirMenu();
        getline(cin, *data);

        *opcion = funciones -> validarOpcion(*data);

        switch (*opcion) {
        case 1:{break;}
        case 2:{
            cout << "El/La cliente: "+ actual.getNombre()+ " sera atendido ahora" << endl;
            //proceder a venta de cliente
            cout << "Eliga alguna de las siguientes categorias" << endl;
            bodega->imprimirCategorias();
            
            //necesito saber como funciona la bodega para saber como llamar a la categoria por su id--------
            break;}
        case 3:{
            //ad clinete Cola        

            cout << "Ingrese nomrbe nombre del Cliente: " << endl;
            getline(cin, *data);
            string nombre=*data;
            cout << "tipo de cliente:  " << endl;
            cout << "1) tercera edad " << endl;
            cout << "2) Discapacidad " << endl;
            cout << "3) Embarazada " << endl;
            cout << "4) normal " << endl;
            getline(cin, *data);
            *opcion = funciones -> validarOpcion(*data);
            string tipo;
            
            switch(*opcion-1){
                case 0 :{tipo="0";
                    break;}
                case 1 :{tipo="1";
                    break;}
                case 2 :{tipo="2";
                    break;}
                case 3 :{tipo="3";
                    break;}
                
            }
            Cliente* c = new Cliente(nombre,tipo);
            cout<<"cliente agregado a la cola"<<endl;
            break;}
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
