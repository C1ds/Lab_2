#include <iostream>
using namespace std;
class Cliente{
    private:
        string  nombre;
        int tipo;
    public:
        Cliente(string nombre,int tipo);
        int getTipo();
};