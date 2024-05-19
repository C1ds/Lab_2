#include <iostream>
#include <string>
#include "LectorDeArchivos.h"
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
LectorDeArchivos::LectorDeArchivos(){
}
void leerArchCliente(){
    string nombreArchivo = "Clientes.txt";
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
        cout << partes[1] << endl;
        if(partes[1]=="0"){
            cout << partes[0] << endl;
        }
    }
}
void leerArchProducto(){
    
}
