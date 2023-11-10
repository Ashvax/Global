#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

const int MAX_ELEMENTOS = 30;


void SumaElementos(int elementos[], int numElementos) {
    for (int i = 0; i < numElementos / 2; i++) {
        int elemento1 = elementos[i];
        int elemento2 = elementos[numElementos - 1 - i];
        elementos[i] = elemento1 + elemento2;
    }
}

int main() {
    int elementos[MAX_ELEMENTOS];


    std::srand(static_cast<unsigned int>(std::time(nullptr)));


    for (int i = 0; i < MAX_ELEMENTOS; ++i) {
        elementos[i] = std::rand() % 11;
    }


    std::cout << "Números generados: ";
    for (int i = 0; i < MAX_ELEMENTOS; ++i) {
        std::cout << elementos[i] << " ";
    }
    std::cout << std::endl;


    SumaElementos(elementos, MAX_ELEMENTOS);


    std::cout << "Resultado después de la suma: " << elementos[0] << std::endl;

    getch();
    return 0;
}

