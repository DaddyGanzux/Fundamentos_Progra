#include <iostream>
#include <locale>
#include <string>
int main()
{
	setlocale(LC_ALL, "es_MX.UFT-8");
	std::string apodo = "Usuario1";
	std::string apodo_usuario;
	std::string contra = "244466666";
	std::string  contra_usuario;
	std::cout << "Buenas bueeeenaaaaaaaaaaaaaaass, ¿Cúal es tu nombre de usuario? ";
	std::getline(std::cin, apodo_usuario);
	if (apodo == apodo_usuario)
	{
		std::cout << "Ingrese su contraseña para confirmar que si es ustes, hay muchos chismosos allá fuera" << std::endl;
		//std::cin.ignore();
		std::getline(std::cin, contra_usuario);
		if (contra == contra_usuario)
		{
			std::cout << "Bienvenido " << apodo << std::endl;
		}
		else
		{
			std::cout << "Orale!!!! No ande de chismoso vuelve cuando aprendas de cultura\n";
		}
	}
	else
	{
		std::cout << "Ni en tu casa te ubican vdd?\n";
	}
}