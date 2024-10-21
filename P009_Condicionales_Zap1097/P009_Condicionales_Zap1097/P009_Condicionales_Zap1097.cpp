
#include <iostream>
#include <math.h>
#include <time.h>
#include <Locale>
#include <codecvt>
#include <string>


int main()
{

		char respuesta;
		bool respuestaValida = false;
		bool esSi = true;
		int opcion = 0;
		int zi = 0;
		int no = 0;
		int mul = 0;
		int div = 0;
		double numero1 = 0;
		double numero2 = 0;
		double numero3 = 0;
		double numero4 = 0;

	while (esSi)
	{

		std::cout << "Puedes realizar distintas operaciones las cuales son: 1- Suma 2- Resta 3- Multiplicacion 4- Divicion 5- Potencia al cuadrado 6- Raiz Cuadrada  7- Mayor o Menor que.\n";
		std::cin >> opcion;

		switch (opcion)
		{
		case 1:


			std::cout << "Excelente entonces sumemos, Cuantos valores quieres sumar? 1- dos valores 2- tres valores 3- cuatro valores\n";
			std::cin >> zi;
			switch (zi)
			{
			case 1:


				std::cout << "Dame tu primer valor---\n";
				std::cin >> numero1;

				std::cout << "Dame tu segundo valor--\n";
				std::cin >> numero2;

				std::cout << "Este es tu resultado\n";

				std::cout << "1.- " << numero1 << " + " << numero2 << " es igual a " << numero1 + numero2 << std::endl;

				break;

			case 2:

				std::cout << "Dame tu primer valor---\n";
				std::cin >> numero1;

				std::cout << "Dame tu segundo valor--\n";
				std::cin >> numero2;

				std::cout << "Dame tu tercer valor---\n";
				std::cin >> numero3;

				std::cout << "1.- " << numero1 << " + " << numero2 << " + " << numero3 << " es igual a " << numero1 + numero2 + numero3 << std::endl;

				break;

			case 3:

				std::cout << "Dame tu primer valor---\n";
				std::cin >> numero1;

				std::cout << "Dame tu segundo valor--\n";
				std::cin >> numero2;

				std::cout << "Dame tu tercer valor---\n";
				std::cin >> numero3;

				std::cout << "Dame tu cuarto valor---\n";
				std::cin >> numero4;

				std::cout << "1.- " << numero1 << " + " << numero2 << " + " << numero3 << " + " << numero4 << " es igual a " << numero1 + numero2 + numero3 + numero4 << std::endl;

				break;
			}

			break;

		case 2:


			std::cout << "Excelente entonces restemos, Cuantos valores quieres restar? 1- dos valores 2- tres valores 3- cuatro valores\n";
			std::cin >> no;
			switch (no)
			{
			case 1:


				std::cout << "Dame tu primer valor---\n";
				std::cin >> numero1;

				std::cout << "Dame tu segundo valor--\n";
				std::cin >> numero2;

				std::cout << "Este es tu resultado\n";

				std::cout << "1.- " << numero1 << " - " << numero2 << " es igual a " << numero1 - numero2 << std::endl;
				break;

			case 2:

				std::cout << "Dame tu primer valor---\n";
				std::cin >> numero1;

				std::cout << "Dame tu segundo valor--\n";
				std::cin >> numero2;

				std::cout << "Dame tu primer valor---\n";
				std::cin >> numero3;

				std::cout << "1.- " << numero1 << " - " << numero2 << " - " << numero3 << " es igual a " << numero1 - numero2 - numero3 << std::endl;
				break;

			case 3:

				std::cout << "Dame tu primer valor---\n";
				std::cin >> numero1;

				std::cout << "Dame tu segundo valor--\n";
				std::cin >> numero2;

				std::cout << "Dame tu tercer valor---\n";
				std::cin >> numero3;

				std::cout << "Dame tu cuarto valor---\n";
				std::cin >> numero4;

				std::cout << "1.- " << numero1 << " - " << numero2 << " - " << numero3 << " - " << numero4 << " es igual a " << numero1 - numero2 - numero3 - numero4 << std::endl;

				break;
			}

			break;

		case 3:


			std::cout << "Excelente entonces multipliquemos, Cuantos valores quieres multiplicar? 1- dos valores 2- tres valores 3- cuatro valores\n";
			std::cin >> mul;
			switch (mul)
			{
			case 1:


				std::cout << "Dame tu primer valor---\n";
				std::cin >> numero1;

				std::cout << "Dame tu segundo valor--\n";
				std::cin >> numero2;

				std::cout << "Este es tu resultado\n";

				std::cout << "1.- " << numero1 << " x " << numero2 << " es igual a " << numero1 * numero2 << std::endl;

				break;

			case 2:

				std::cout << "Dame tu primer valor---\n";
				std::cin >> numero1;

				std::cout << "Dame tu segundo valor--\n";
				std::cin >> numero2;

				std::cout << "Dame tu primer valor---\n";
				std::cin >> numero3;

				std::cout << "1.- " << numero1 << " x " << numero2 << " x " << numero3 << " es igual a " << numero1 * numero2 * numero3 << std::endl;

				break;

			case 3:

				std::cout << "Dame tu primer valor---\n";
				std::cin >> numero1;

				std::cout << "Dame tu segundo valor--\n";
				std::cin >> numero2;

				std::cout << "Dame tu tercer valor---\n";
				std::cin >> numero3;

				std::cout << "Dame tu cuarto valor---\n";
				std::cin >> numero4;

				std::cout << "1.- " << numero1 << " x " << numero2 << " x " << numero3 << " x " << numero4 << " es igual a " << numero1 * numero2 * numero3 * numero4 << std::endl;

				break;
			}

		case 4:


			std::cout << "Excelente entonces dividamos, Cuantos valores quieres dividir? 1- dos valores 2- tres valores 3- cuatro valores\n";
			std::cin >> div;
			switch (div)
			{
			case 1:

				std::cout << "Dame tu primer valor---\n";
				std::cin >> numero1;

				std::cout << "Dame tu segundo valor--\n";
				std::cin >> numero2;

				std::cout << "Este es tu resultado\n";

				if (numero1 || numero2 != 0) {
					std::cout << "1.- " << numero1 << " ÷ " << numero2 << " es igual a " << numero1 / numero2 << std::endl;
				}
				else {
					std::cout << "No se puede dividir entre cero." << std::endl;
				}

				break;

			case 2:

				std::cout << "Dame tu primer valor---\n";
				std::cin >> numero1;

				std::cout << "Dame tu segundo valor--\n";
				std::cin >> numero2;

				std::cout << "Dame tu primer valor---\n";
				std::cin >> numero3;


				if (numero1 || numero2 || numero3 != 0)
				{
					std::cout << "1.- " << numero1 << " ÷ " << numero2 << " ÷ " << numero3 << " es igual a " << numero1 / numero2 / numero3 << std::endl;
				}
				else
				{
					std::cout << "No se puede dividir entre cero." << std::endl;
				}

				break;

			case 3:

				std::cout << "Dame tu primer valor---\n";
				std::cin >> numero1;

				std::cout << "Dame tu segundo valor--\n";
				std::cin >> numero2;

				std::cout << "Dame tu tercer valor---\n";
				std::cin >> numero3;

				std::cout << "Dame tu cuarto valor---\n";
				std::cin >> numero4;


				if (numero1 || numero2 || numero3 || numero4 != 0) {
					std::cout << "1.- " << numero1 << " ÷ " << numero2 << " ÷ " << numero3 << " ÷ " << numero4 << " es igual a " << numero1 / numero2 / numero3 / numero4 << std::endl;
				}
				else
				{
					std::cout << "No se puede dividir entre cero." << std::endl;

				}

				break;

			}

			break;

		case 5:


			std::cout << "Excelente entonces saquemos la elevación al cuadrado";
			std::cout << "Dame tu primer valor---\n";
			std::cin >> numero1;

			std::cout << "Dame tu segundo valor--\n";
			std::cin >> numero2;

			std::cout << "Estos son tus resultados\n";

			std::cout << "El número " << numero1 << " elevado al cuadrado es " << numero1 * numero1 << std::endl;

			std::cout << "El número " << numero2 << " elevado al cuadrado es " << numero2 * numero2 << std::endl;

			break;

		case 6:


			std::cout << "Excelente entonces saquemos la raiz cuadrada";
			std::cout << "Dame tu primer valor---\n";
			std::cin >> numero1;

			std::cout << "Dame tu segundo valor--\n";
			std::cin >> numero2;

			std::cout << "Estos son tus resultados\n";

			std::cout << "La raíz cuadrada de " << numero1 << " es " << sqrt(numero1) << std::endl;

			std::cout << "La raíz cuadrada de " << numero2 << " es " << sqrt(numero2) << std::endl;

			break;

		case 7:



			std::cout << "Excelente entonces saquemos el mayor o menor que";
			std::cout << "Dame tu primer valor---\n";
			std::cin >> numero1;

			std::cout << "Dame tu segundo valor--\n";
			std::cin >> numero2;

			std::cout << "Este es tu resultado\n";
			if (numero1 > numero2) {
				std::cout << "7.- " << numero1 << " es mayor que " << numero2 << std::endl;
			}
			else if (numero1 < numero2) {
				std::cout << "7.- " << numero1 << " es menor que " << numero2 << std::endl;
			}
			else {
				std::cout << "7.- " << numero1 << " es igual a " << numero2 << std::endl;
			}

			break;

		}
			std::cout << "¿Desea repetir? (s/n)";
			std::cin >> respuesta;
			if (respuesta == 's' || respuesta == 'S')
			{
				esSi = true;
			}
			else
				if (respuesta == 'n' || respuesta == 'N')
				{
					esSi = false;
				}
	}
}