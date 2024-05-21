#pragma once
#include <iostream>
using namespace std;

class Producto{
    private:
        string nombre,categoria,subCategoria, id;
        int precio;
    public:
        Producto(string nombre,string categoria, string subCategoria, int precio, string id);
};