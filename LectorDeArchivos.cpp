#include <iostream>
#include <string>
#include "LectorDeArchivos.h"
#include "Fila.h"
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
LectorDeArchivos::LectorDeArchivos(){
}
void LectorDeArchivos::leerArchProducto(){
    string nombreArchivo = "Productos.txt";
    ifstream archivo(nombreArchivo.c_str());
    string linea;
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }
    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string parte;
        vector<string> partes;
        while (getline(ss, parte, ',')) {
            partes.push_back(parte);
        }
        cout << "Crear Bodega para terminar esto" << endl;
        
    }archivo.close();
}
void LectorDeArchivos::leerArchCliente(){
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
        return;
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
    archivo.close();
}

