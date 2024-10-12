#include <iostream>
#include <math.h>
#include <time.h>
#include <Locale>
#include <codecvt>
#include <string>
int main()
{
	setlocale(LC_ALL, "Spanish");
	double numero1 = 0;
	double numero2 = 0;
	std::string respuesta;
	std::cout << "Realizaremos distintas operaciones las cuales sen: Suma, Resta, Multiplicacón, Divición, Potencia al cuadrado, Raíz Cuadrada y Mayor o Menor que.\n";
	std::cout << "¿Estas listo?\n";
	std::cin >> respuesta;

	std::cout << "EXCELENTE continuemos, si pusiste que no pues nimodote pa que te metes al programa\n";

	std::cout << "Dame tu primer valor---\n";
	std::cin >> numero1;
	std::cout << "Dame tu segundo valor--\n";
	std::cin >> numero2;
	std::cout << "Estos son tus resultados\n";

	std::cout << "1.- " << numero1 << " más " << numero2 << " es igual a " << numero1 + numero2 << std::endl;

	std::cout << "2.- " << numero1 << " menos " << numero2 << " es igual a " << numero1 - numero2 << std::endl;

	std::cout << "3.- " << numero1 << " por " << numero2 << " es igual a " << numero1 * numero2 << std::endl;

	if (numero2 != 0) {
		std::cout << "4.- " << numero1 << " entre " << numero2 << " es igual a " << numero1 / numero2 << std::endl;
	}
	else {
		std::cout << "4.- No se puede dividir entre cero." << std::endl;
	}

	std::cout << "5.- La raíz cuadrada de " << numero1 << " es " << sqrt(numero1) << std::endl;

	std::cout << "5.1.- La raíz cuadrada de " << numero2 << " es " << sqrt(numero2) << std::endl;

	std::cout << "6.- " << numero1 << " elevado al cuadrado es " << numero1 * numero1 << std::endl;

	std::cout << "6.1.- " << numero2 << " elevado al cuadrado es " << numero2 * numero2 << std::endl;

	if (numero1 > numero2) {
		std::cout << "7.- " << numero1 << " es mayor que " << numero2 << std::endl;
	}
	else if (numero1 < numero2) {
		std::cout << "7.- " << numero1 << " es menor que " << numero2 << std::endl;
	}
	else {
		std::cout << "7.- " << numero1 << " es igual a " << numero2 << std::endl;
	}

}