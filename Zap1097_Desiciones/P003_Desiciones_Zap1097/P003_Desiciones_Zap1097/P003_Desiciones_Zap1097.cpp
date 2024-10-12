// P003_Desiciones_Zap1097.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <string>
int main()
{
	setlocale(LC_ALL, "es_MX.UFT-8");
	std::string apodo = "Franco";
	std::string apodo_usuario;
	std::string contra = "Que tiene el c**o blanco";
	std::string  contra_usuario;
	std::cout << "Buenas bueeeenaaaaaaaaaaaaaaass, ¿Cúal es tu nombre de usuario? ";
	std::getline(std::cin, apodo_usuario);
	if (apodo == apodo_usuario)
	{
		std::cout << "Ingrese su contraseña para confirmar que si es ustes, hay muchos chismosos allá fuera" << std::endl;
		std::getline(std::cin, contra_usuario);
		if (contra == contra_usuario)
		{
			std::cout << "Por que su mujer lo lava con ariel, veo que eres un hombre de cultura y que si te la sabes, Bienvenido " << apodo << std::endl;
		}
		else
		{
			std::cout << "Orale!!!! No hande de chismoso vuelve cuando aprendas de cultura\n";
		}
	}
	else
	{
		std::cout << "Ni en tu casa te ubican vdd?\n";
	}
	int opcion = 0;
	std::cout << "¿Qué va primero la leche o el cereal? Escribe solo el número de la opción\n";
	std::cout << "1- La leche 2- El cereal 3-\n";
	std::cin >> opcion;
	switch (opcion)
	{
	case 1:
		std::cout << "No hay lugar para tontos como tu, FUERA!!!  opción 1\n";
		break;
	case 2:
		std::cout << "Bien, veo que eres un modelo ejemplar para la sociedad sigue así\n";
		break;
	case 3:
		std::cout << "Escojiste el tazon, veo que usted es un ser superior y que su intelecto es muy superior al nuestro le felicito\n";
		break;
	default:
		std::cout << "¿Me estas tomendo el pelo? eso no era una opción si los que ponen primero la leche eran tontos tu estas en otro nivel\n";
		break;
	}
}