#include <iostream>
#include "Fila.h"
#include<string>
#include <queue>
Fila::Fila(){
      std::queue<Cliente> fila;
}

addClient(Cliente c){fila.push(c)};
string nextClient(){
    fila.front();
    fila.pop();
};