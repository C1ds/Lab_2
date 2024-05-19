#pragma once
#include <iostream>
using namespace std;
class Producto{
    private:
        string categoria,subCategoria, id;
        int precio;
    public:
        Producto(string categoria, string subCategoria, int precio, string id);
};