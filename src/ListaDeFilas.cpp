#include <iostream>
#include <string>
#include <queue> 
#include "ListaDeFilas.h"
#include "Fila.h"
#include "Cliente.h"

using namespace std;

ListaDeFilas::ListaDeFilas(Fila fNormal,Fila fTerEdad,Fila fDiscap,Fila fEmbarazada): fNormal(fNormal), fTerEdad(fTerEdad), fDiscap(fDiscap), fEmbarazada(fEmbarazada) {primera=true;}
Fila ListaDeFilas::getfNormal(){return fNormal;}
Fila ListaDeFilas::getfTerEdad(){return fTerEdad;}
Fila ListaDeFilas::getfDiscap(){return fDiscap;}
Fila ListaDeFilas::getfEmbarazada(){return fEmbarazada;}
Cliente ListaDeFilas::getNextCliente(){
    if(fTerEdad.getCant()!=0){
        return fTerEdad.nextClient();
    }else if(fDiscap.getCant()!=0){
        return fDiscap.nextClient();
    }else if(fEmbarazada.getCant()!=0){
        return fEmbarazada.nextClient();
    }else if(fNormal.getCant()!=0){
        return fNormal.nextClient();
    }
    return *(new Cliente(NULL,NULL));
}

