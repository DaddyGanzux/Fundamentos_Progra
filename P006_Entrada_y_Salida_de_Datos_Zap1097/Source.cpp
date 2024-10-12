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
}