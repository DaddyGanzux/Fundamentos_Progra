#include <iostream>
#include <cstdlib>
#include <ctime>

// Función para llenar una matriz con números aleatorios entre 0 y 10
void llenarMatriz(int** matriz, int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = rand() % 10; // Rango 0-9
        }
    }
}

// Función para mostrar una matriz completa
void mostrarMatriz(int** matriz, int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Función para crear una matriz dinámica
int** crearMatriz(int filas, int columnas) {
    int** matriz = new int* [filas];
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
    }
    return matriz;
}

// Función para liberar la memoria de una matriz
void liberarMatriz(int** matriz, int filas) {
    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

int main() {
    srand(time(0));

    // Crear matrices dinámicamente una vez
    int** matriz3x3 = crearMatriz(3, 3);
    int** matriz5x5 = crearMatriz(5, 5);
    int** matriz10x10 = crearMatriz(10, 10);

    // Llenar matrices con números aleatorios
    llenarMatriz(matriz3x3, 3, 3);
    llenarMatriz(matriz5x5, 5, 5);
    llenarMatriz(matriz10x10, 10, 10);

    int opcion;
    do {
        // Mostrar menú para las opciones
        std::cout << "\nSeleccione la matriz que desea ver:\n";
        std::cout << "1. Matriz 3x3\n";
        std::cout << "2. Matriz 5x5\n";
        std::cout << "3. Matriz 10x10\n";
        std::cout << "4. Salir\n";
        std::cout << "Opción: ";
        std::cin >> opcion;

        // Validar entrada
        if (std::cin.fail()) {
            std::cin.clear(); // Limpiar el estado de error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada inválida. Por favor, ingrese un número entre 1 y 4.\n";
            continue;
        }

        switch (opcion) {
        case 1:
            std::cout << "\nMatriz 3x3:\n";
            mostrarMatriz(matriz3x3, 3, 3);
            break;
        case 2:
            std::cout << "\nMatriz 5x5:\n";
            mostrarMatriz(matriz5x5, 5, 5);
            break;
        case 3:
            std::cout << "\nMatriz 10x10:\n";
            mostrarMatriz(matriz10x10, 10, 10);
            break;
        case 4:
            std::cout << "Saliendo del programa. Adiós!\n";
            break;
        default:
            std::cout << "Opción no válida. Por favor, intente de nuevo.\n";
            break;
        }
    } while (opcion != 4);

    // Liberar la memoria de las matrices una vez
    liberarMatriz(matriz3x3, 3);
    liberarMatriz(matriz5x5, 5);
    liberarMatriz(matriz10x10, 10);

    return 0;
}
