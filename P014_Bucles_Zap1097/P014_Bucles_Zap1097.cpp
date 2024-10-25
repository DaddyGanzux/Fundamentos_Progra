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

    int contador = 0;

    std::cout << "Preciona enter para empezar";
    system("pause");
    while (contador <= 999)
    {
        contador++;
        std::cout << "Vamos en" << contador << std::endl;
    }
    std::cout << "Preciona enter para continuar";
    system("pause");
    do
    {
        contador--;
        std::cout << "El contador DO WHILE va en: " << contador << std::endl;
    } while (contador >= 1);
}