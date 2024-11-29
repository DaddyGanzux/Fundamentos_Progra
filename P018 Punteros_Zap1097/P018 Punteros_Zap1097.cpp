#include <iostream>
#include <cstdlib>
#include <ctime>


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

// Función para mostrar una matriz completa
void mostrarMatriz(int** matriz, int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    srand(time(0));

    // Primera parte: Matriz 2x3 con entrada manual
    std::cout << "Primera parte: Matriz fija 2x3 con datos ingresados manualmente\n";
    const int filasFijas = 2, columnasFijas = 3;
    int matrizFija[filasFijas][columnasFijas];

    for (int i = 0; i < filasFijas; ++i) {
        for (int j = 0; j < columnasFijas; ++j) {
            std::cout << "Ingrese el dato para la posición [" << i << "][" << j << "]: ";
            std::cin >> matrizFija[i][j];
        }
    }

    // Mostrar la matriz fija
    std::cout << "Matriz 2x3 ingresada:\n";
    for (int i = 0; i < filasFijas; ++i) {
        for (int j = 0; j < columnasFijas; ++j) {
            std::cout << matrizFija[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Segunda parte: Matriz dinámica
    std::cout << "\nSegunda parte: Matriz dinámica\n";
    int filas, columnas;

    std::cout << "Ingrese el número de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas: ";
    std::cin >> columnas;

    int** matrizDinamica = crearMatriz(filas, columnas);

    if (filas > 3 || columnas > 3) {
        // Llenar la matriz con datos aleatorios
        std::cout << "Llenando la matriz automáticamente con datos aleatorios...\n";
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                matrizDinamica[i][j] = rand() % 10; // Rango 0-9
            }
        }
    }
    else {
        // Llenar la matriz manualmente
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                std::cout << "Ingrese el dato para la posición [" << i << "][" << j << "]: ";
                std::cin >> matrizDinamica[i][j];
            }
        }
    }

    // Mostrar la matriz dinámica
    std::cout << "Matriz dinámica:\n";
    mostrarMatriz(matrizDinamica, filas, columnas);

    // Liberar memoria de la matriz dinámica
    liberarMatriz(matrizDinamica, filas);

    return 0;
}
