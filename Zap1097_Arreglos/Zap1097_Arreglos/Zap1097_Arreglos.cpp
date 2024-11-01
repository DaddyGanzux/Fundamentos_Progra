// Zap1097_Arreglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <random>
#include <cstdlib>


int main()
{
	int num = std::rand() % 10 + 1;
	int edades[3][3] = { {num,num,num},{num,num,num},{num,num,num} };
	int filas = (sizeof(edades) / sizeof(edad
		es[0]));
	std::cout << filas<< std::endl;
	int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
	std::cout << columnas;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
