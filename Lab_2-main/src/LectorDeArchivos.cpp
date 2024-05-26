#include <iostream>
#include <string>
#include "../include/LectorDeArchivos.h"
#include "../include/Fila.h"
#include "../include/ListaDeFilas.h"
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

LectorDeArchivos::LectorDeArchivos(){
}

Bodega* LectorDeArchivos::leerArchProducto(Bodega* bodega){
    string nombreArchivo = "Productos.txt";
    bodega = new Bodega();
    ifstream archivo(nombreArchivo.c_str());
    string linea;
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return bodega;
    }
    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string parte;
        vector<string> partes;
        while (getline(ss, parte, ',')) {
            partes.push_back(parte);
        }
        bodega->addCategoria(partes[1]);
        bodega->addSubCategoria(partes[1],partes[2]);
        bodega->addProducto(partes[1],partes[2],Producto(partes[0],stoi(partes[3]),partes[4]));
    }
    archivo.close();
    return bodega;
}

ListaDeFilas LectorDeArchivos::leerArchCliente(){
    string nombreArchivo = "Clientes.txt";
    ifstream archivo(nombreArchivo.c_str());
    string linea;
    //Crear Filas
    Fila fNormal;
    Fila fTerEdad;
    Fila fDiscap;
    Fila fEmbarazada;
    
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        
    }
    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string parte;
        vector<string> partes;
        while (getline(ss, parte, ',')) {
            partes.push_back(parte);
        }
        if(partes[1]=="0"){
            fNormal.addClient(Cliente(partes[0],partes[1]));
        }if(partes[1]=="1"){
            fTerEdad.addClient(Cliente(partes[0],partes[1]));
        }
        if(partes[1]=="2"){
            fDiscap.addClient(Cliente(partes[0],partes[1]));
        }if(partes[1]=="3"){
            fEmbarazada.addClient(Cliente(partes[0],partes[1]));
        }
        
    }
    ListaDeFilas* lista = new ListaDeFilas(fNormal,fTerEdad,fDiscap,fEmbarazada);
    archivo.close();
    return *lista;
}

LectorDeArchivos::~LectorDeArchivos() {}