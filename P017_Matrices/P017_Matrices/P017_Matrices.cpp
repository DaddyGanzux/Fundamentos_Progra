#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()

int opcion = 0;






int main() {

    std::cout << "Bienvenido al generador de Matrices, quiere geterar una matris  1- 3x3   2- 5x5  o   3- 10x10 " << std::endl;
    std::cin >> opcion;

    switch (opcion)
    { 
        case 1:

        srand(time(0));
        // Inicializar la semilla del generador de números aleatorios
        int matriz[3][3];

        // Llenar la matriz con valores aleatorios entre 0 y 9
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matriz[i][j] = rand() % 10; // rand() % 11 genera números entre 0 y 9
            }
        }

        // Mostrar la matriz
        (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                std::cout << matriz[i][j] << " ";
            }
                ::cout << std::endl;
        }
    }








    return 0;
}
