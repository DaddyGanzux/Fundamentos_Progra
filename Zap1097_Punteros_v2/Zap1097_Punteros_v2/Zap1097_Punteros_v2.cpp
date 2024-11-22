// P008_PUNTEROS_V2.cpp
// Sintaxys de Memoria Dinamica

#include <stdio.h>
#include <iostream>
#include <string>
#include <locale>
#include <Windows.h>
//Espacio para declarar funciones
void imprimir(std::string* titulo, std::string* Autor, int* anio_Pub, int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        std::cout << "El titulo del juego numero " << i + 1 << " es: " << titulo[i] << std::endl;
        std::cout << "El Autor del juego numero " << i + 1 << " es: " << Autor[i] << std::endl;
        std::cout << "El año de publicación del juego numero " << i + 1 << " es: " << anio_Pub[i] << std::endl;
    }
}
int main()
{
    setlocale(LC_ALL, "en_MX.UTF-8");
    //Crear punteros para almacenar juegos
    std::string* titulo = NULL; //Inicializar el puntero en NULL
    std::string* Autor = NULL;
    int* anio_Publicacion = NULL;
    int tamanio = 0;
    std::cout << "Hola gamer cuantos juegos quieres guardar??\n";
    std::cin >> tamanio;
    //No tenemos que tener cautiva la memoria
    //std::string titulos[100];
    //Crear variables con el tamaño que deseamos
    titulo = new std::string[tamanio];
    Autor = new std::string[tamanio];
    anio_Publicacion = new int[tamanio];
    //metodo para almacenar información
    for (int i = 0; i < tamanio; i++)
    {
        std::cout << "Ingresa el titulo del Juego número " << i + 1 << std::endl;
        std::cin.ignore();
        getline(std::cin, titulo[i]);
        std::cout << "Ingresa el autor del Juego; " << std::endl;
        getline(std::cin, Autor[i]);
        std::cout << "Ingresa el año de publicación del Juego; " << std::endl;
        std::cin >> anio_Publicacion[i];
        system("CLS");
    }
    //Teoría/Practica de Funciones.
    //Una función es una nave espacial
    //Imprimir los datos recolectados
    imprimir(titulo, Autor, anio_Publicacion, tamanio);
    delete[] titulo;
    delete[] Autor;
    delete[] anio_Publicacion;
    titulo = NULL;
    Autor = NULL;
    anio_Publicacion = NULL;
}