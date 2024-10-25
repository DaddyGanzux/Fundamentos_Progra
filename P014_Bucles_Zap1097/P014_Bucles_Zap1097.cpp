#include <iostream>
#include <time.h>
#include <Locale>
#include <codecvt>
#include <string>
#include <thread>
#include <chrono>

int main()
{

    int contador = 0;

    std::cout << "Preciona enter para empezar\n";
    system("pause");
    while (contador <= 999)
    {
        contador++;
        std::cout << "Vamos en " << contador << std::endl;
    }
    std::cout << "Preciona enter para continuar\n";
    system("pause");
    do
    {
        contador--;
        std::cout << "Vamos en " << contador << std::endl;
    } while (contador >= 1);
    std::cout << "Preciona enter para continuar\n";
    system("pause");
    for (int i = 0; i <= 1000; i++)
    {
        std::cout << "Vamos en" << i << std::endl;
    }
    std::cout << "Preciona enter para empezar\n";
    system("pause");
    while (contador <= 99)
    {
        contador++;
        std::cout << "Vamos en " << contador << std::endl;
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(.2s);
    }
    std::cout << "Preciona enter para continuar\n";
    system("pause");
    for (size_t j = 0; j < 1; j++)
    {
        for (size_t i = 0; i < 11; i++)
        {
            std::cout << i << " ";

        }
        std::cout << std::endl;
        for (size_t i = 10; i < 21; i++)
        {
            std::cout << i << " ";

        }
        std::cout << std::endl;
        for (size_t i = 20; i < 31; i++)
        {
            std::cout << i << " ";

        }
        std::cout << std::endl;
        for (size_t i = 30; i < 41; i++)
        {
            std::cout << i << " ";

        }
        std::cout << std::endl;
        for (size_t i = 40; i < 51; i++)
        {
            std::cout << i << " ";

        }
        std::cout << std::endl;
        for (size_t i = 50; i < 61; i++)
        {
            std::cout << i << " ";

        }
        std::cout << std::endl;
        for (size_t i = 60; i < 71; i++)
        {
            std::cout << i << " ";

        }
        std::cout << std::endl;
        for (size_t i = 70; i < 81; i++)
        {
            std::cout << i << " ";

        }
        std::cout << std::endl;
        for (size_t i = 80; i < 91; i++)
        {
            std::cout << i << " ";

        }
        std::cout << std::endl;
        for (size_t i = 90; i < 101; i++)
        {
            std::cout << i << " ";

        }
        std::cout << std::endl;
    }

}