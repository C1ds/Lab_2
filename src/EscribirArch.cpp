#include <iostream>
#include "../include/EscribirArch.h"
#include "../include/ListaDeFilas.h"
#include "../include/Fila.h"
#include "../include/Cliente.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <queue>

using namespace std;

EscribirArch::EscribirArch(){}
void EscribirArch::escribirArchCliente(ListaDeFilas listaDeFilas){
    string archCliente = "Clientes.txt";
    ofstream archivoClientes;
    archivoClientes.open(archCliente.c_str(), fstream::out);
    Fila fNormal=listaDeFilas.getfNormal();
    Fila fTerEdad=listaDeFilas.getfTerEdad();
    Fila fDiscap=listaDeFilas.getfDiscap();
    Fila fEmbarazada=listaDeFilas.getfEmbarazada();
    Cliente* actual;
    //borrar lo de abajo
    archivoClientes<<"edison,0"<<endl<<"juancha,1"<<endl<<"pepe,2"<<endl<<"boric,3"<<endl;
       cout<<fNormal.getCant()<<endl;
        
    archivoClientes.close();

};
void EscribirArch::escribirArchProducto(){}
EscribirArch::~EscribirArch() {};