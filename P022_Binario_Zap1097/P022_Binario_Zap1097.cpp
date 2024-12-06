// P022_Binario_Zap1097.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <bitset>
#include <string>
#include <thread>
#include <chrono>
#include <Locale>




void imprimirLento(const std::string& texto, int retrasoMilisegundos) {
    for (char c : texto) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(retrasoMilisegundos));
    }
}

//--------------Función para convertir decimal a binario (como cadena)--------
std::string decimalToBinary(int decimal) {
    return std::bitset<16>(decimal).to_string();
}

// -------------Función para convertir binario (como cadena) a decimal--------
int binaryToDecimal(const std::string& binary) {
    return std::stoi(binary, nullptr, 2);
}

int main() {

    std::locale::global(std::locale("en_US.UTF-8"));

    int opcion;

    std::string p1 = "Bienvenido a la conversión de binarios a decimales\n";
    imprimirLento(p1, 40);

    do
    {
        std::string p2 = "¿Qué operación deseas realizar?\n";
        imprimirLento(p2, 20);

        std::cout << "1 - Suma\n";
        std::cout << "2 - Resta\n";
        std::cout << "3 - Multiplicación\n";
        std::cout << "4 - División\n";
        std::cout << "5 - Salir\n";
        std::cout << "Introduce una opción: ";
        std::cin >> opcion;

        system("cls");

        if (opcion == 5)
        {
            std::string p3 = "¡Gracias por usar el programa! Adiós.\n";
            imprimirLento(p3, 20);
            break;
        }

        int num1, num2;
        std::cout << "Introduce tu primer número decimal: ";
        std::cin >> num1;
        std::cout << "Introduce tu segundo número decimal: ";
        std::cin >> num2;

        std::string bin1 = decimalToBinary(num1);
        std::string bin2 = decimalToBinary(num2);

        std::cout << "Binario del primer número: " << bin1 << std::endl;
        std::cout << "Binario del segundo número: " << bin2 << std::endl;

        switch (opcion)

        {

        case 1:
        {
            // ------------------Suma-------------------------

            std::string sumBin = std::bitset<16>(num1 + num2).to_string();
            std::cout << "Suma en binario: " << sumBin << std::endl;

            std::cout << "Suma decimal: " << (num1 + num2) << std::endl;
            break;
        }
        case 2:
        {
            // ---------------Resta---------------------------

            std::string resBin = std::bitset<8>(num1 - num2).to_string();
            std::cout << "Resta en binario: " << resBin << std::endl;

            std::cout << "Resta decimal: " << (num1 - num2) << std::endl;
            break;
        }
        case 3:
        {
            // ---------------Multiplicación------------------

            std::string mulBin = std::bitset<8>(num1 * num2).to_string();
            std::cout << "Multiplicación en binario: " << mulBin << std::endl;

            std::cout << "Multiplicación decimal: " << (num1 * num2) << std::endl;
            break;
        }
        case 4:
        {
            // -----------------División-----------------------------

            if (num2 == 0)
            {
                std::cout << "Error: No se puede dividir entre cero.\n";
                break;
            }
            std::string divBin = std::bitset<8>(num1 / num2).to_string();
            std::cout << "División en binario: " << divBin << std::endl;

            std::cout << "División decimal: " << (num1 / num2) << std::endl;
            break;
        }
        default:
            std::cout << "Opción no válida. Intenta de nuevo.\n";
        }
    } while (true);

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
