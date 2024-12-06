// P023_Máximo_Común_Divisor_Zap1097.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>


int calcularMCD(int a, int b) 
{

    if (b == 0) {
        return a;
    }
   
    return calcularMCD(b, a % b);
}

int main() 
{
    int num1, num2;
    int opcion;

    std::locale::global(std::locale("en_US.UTF-8"));

    do
    {
        system("cls");

        std::cout << "Bienvendio al Maximo comun divisor\n";
        std::cout << "\n";

        std::cout << "¿Desea continuar? 1- Si 2- No\n";
        std::cin >> opcion;

        if (opcion == 2)
        {
            std::cout << "\n";
            std::cout << "Gracias\n";
            break;
        }
        std::cout << "\n";
        std::cout << "Introduce el primer número: \n";
        std::cin >> num1;

        std::cout << "\n";
        std::cout << "Introduce el segundo número: \n";
        std::cin >> num2;

        int mcd = calcularMCD(num1, num2);

        std::cout << "\n";
        std::cout << "El Máximo Común Divisor de " << num1 << " y " << num2 << " es: " << mcd << std::endl;

        std::cin.ignore();

        std::cin.get();

    } while (true);

    return 0;
}
