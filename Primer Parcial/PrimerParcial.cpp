#include <iostream>
using namespace std;

// Clase base
class Animal {
public:
    virtual void hacerSonido() {
        cout << "Mi perro hace guau" << endl;
    }
};

// Clase derivada
class Perro : public Animal {
public:
    void hacerSonido() {
        cout << "Guau guau!" << endl;
    }
};

int main() {
    Perro* miPerro = new Perro();

    miPerro->hacerSonido(); // Output: "Guau guau!"

    delete miPerro;

    return 0;
}
