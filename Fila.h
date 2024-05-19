#include <iostream>
#include <string>
#include <queue>
#include "Cliente.h"

class Fila {
private:
    std::queue<Cliente> fila;
public:
    Fila();
    void addClient(Cliente c);
    Cliente nextClient();
};
