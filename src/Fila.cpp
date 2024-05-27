#include "../include/Fila.h"
#include <queue>

Fila::Fila() {
    int cant = 0;
}

void Fila::addClient(Cliente c) {
    fila.push(c);
    cant=cant+1;
}

Cliente Fila::nextClient() {
    if (!fila.empty()) {
        Cliente next = fila.front();
        fila.pop();
        return next;
    } else {
        throw std::out_of_range("No hay clientes en la fila");
    }
}

int Fila::getCant(){
    return cant;}
queue<Cliente> Fila::getFila(){
    return fila;}



