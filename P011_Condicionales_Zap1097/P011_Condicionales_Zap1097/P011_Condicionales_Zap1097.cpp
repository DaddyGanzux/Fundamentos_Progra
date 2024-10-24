

#include <iostream>
#include <time.h>
#include <Locale>
#include <codecvt>
#include <string>
#include <thread>

void imprimirLento(const std::string& texto, int retrasoMilisegundos)
{
	for (char c : texto)
	{
		std::cout << c << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(retrasoMilisegundos));
	}
}


int main()
{
    setlocale(LC_ALL, "es_MX.UFT-8");

    std::string mensaje = "Bienvenido, estas apunto de vivir la experiencia más cubicamene mágica que viviras en tu vida\n";
	imprimirLento(mensaje, 30);

	std::string mensaj = "Adivinare cualquier mob  de minecraft que quieras  2022\n";
	imprimirLento(mensaj, 70);

	return 0;
}

