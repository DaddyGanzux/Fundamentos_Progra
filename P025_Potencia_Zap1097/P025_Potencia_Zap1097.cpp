// P025_Potencia_Zap1097.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>


int potenciador(int a, int b) {
	if (b == 0)
	{
		return 1;
	}
	else
	{
		return a * potenciador(a, b - 1);
	}


}

int main() {
	int base, potencia;
	std::cout << "ingresa el numero base: ";
	std::cin >> base;
	std::cout << "Ingresa potencia: ";
	std::cin >> potencia;
	std::cout << "el resultado es: " << potenciador(base, potencia) << std::endl;
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
