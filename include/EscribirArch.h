#pragma once
#include <iostream>
#include "../include/ListaDeFilas.h"
#include <queue>
using namespace std;
/**
 * @class Clase EscribirArch
*/
class EscribirArch{
    private:
    public:
        EscribirArch ();
        void escribirArchCliente(ListaDeFilas listaDeFilas);
        void escribirArchProducto();
        ~EscribirArch();
};