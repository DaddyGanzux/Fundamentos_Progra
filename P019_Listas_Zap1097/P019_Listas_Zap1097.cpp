// P019_Listas_Zap1097.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>
//Crearemos el nodo fuera del main
class nodo
{
public:
    std::string nombre;
    int edad;
    float ataque;
    double defensa;
    int velocidad;
    nodo* next;

private:
    int nip_Banco = 0123;
};

void imprimir_Lista(nodo* n)
{
    while (n != NULL)
    {
        std::cout << n->edad << "\n" << std::endl;
        n = n->next;
    }
}


int main()
{
    nodo* cabeza = NULL;
    nodo* torso = NULL;
    nodo* pies = NULL;

    cabeza = new nodo();
    torso = new nodo();
    pies = new nodo();

    cabeza->edad = 17;
    cabeza->next = torso;

    torso->edad = 20;
    torso->next = pies;

    pies->edad = 25;
    pies->next = NULL;

    imprimir_Lista(cabeza);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
