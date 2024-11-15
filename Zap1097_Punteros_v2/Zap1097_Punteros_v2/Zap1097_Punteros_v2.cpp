// Zap1097_Punteros_v2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include<stdio.h>
#include<iostream>
#include<string>
#include <locale>
#include<Windows.h>
//Espacio para declarar funciones
void imprimir(std::string* titulo, std::string* autor, int* anio_Pub, int tamanio);

int main()
{
    setlocale(LC_ALL, "en_MX.EFT-8");

    //Crear punteros para almacenar juegos
    std::string* titulo = NULL; //Iniciar el puntero en NULL
    std::string* autor = NULL;
    int* anio_Pub = NULL;
    int tamanio = 0;
    std::cout << "Hello gamer, cuantos juegos quieres guardar?\n";
    std::cin >> tamanio;
    //No tenemos que tener memoria cautiva
    //std::string titulos[100];


    //Crear variabl con el tamaño que nesecitamos 
    titulo = new std::string[tamanio];
    autor = new std::string[tamanio];
    anio_Pub = new int[tamanio]; 

    //Metodo para almacenar información

    for (int i = 0; i < tamanio; i++)
    {
        std::cout << "Ingresa el valor del juego número " << i + 1 << std::endl;
        std::ignore
        getline(std::cin, titulo[i]);
        delete[] titulo;
        delete[] autor;
        delete[] anio_Pub;
        titulo = NULL;
        autor = NULL;
        anio_Pub = NULL;
    }

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
