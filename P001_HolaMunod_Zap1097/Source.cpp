// Zap1097_Hola_Mundo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Gonzalo Robles
//Este archivo contiene la función
//"main". La ejecución del programa
//comienza y termina aquí
//
// STD::

#include <iostream>
#include <math.h>
#include <time.h>
#include <Locale>//Libreria para cambiar idioma
#include <codecvt>//Librerias para cambiar codigos de UTF
#include <string>

int main()
{   //Maneras de configurar para que soporte ñ y acentos
    setlocale(LC_ALL, "es_MX.UFT-8");
    //Inicialezaremos las variables de diferentes tipos
    //Tipo Nombre = Valor asignado de diferentes tipos
    //Para guardar numeros enteros Reales
    int Edad = 0;
    //Para guardar numeros decimales
    float Altura = 0;
    //Para guardar VERDADES o FALSEDADES
    bool esVerdadero;
    //Para guardar numeros REALMENTE EXTENSOS
    double Expoencial = 0;
    //Para guardar letras!!
    char nombre = 0;
    //Para guardar cadenas de caracteres osea muchas letras 
    char sexo[15] = " ";
    std::string name = " ";
    std::string apodo = "Nulo";

    //Hablemos con el usuario y solisitemos la información.
    std::cout << "Cuentame!! Que edad tienes? ";
    std::cin >> Edad;
    std::cout << "Entonces tienes. " << Edad << " de edad,  exelente, pasele joven.";

    //Hablemos con el usuario
    std::cout << " ¿Cual es tú altura?";
    std::cin >> Altura;
    std::cout << "Entonces mides " << Altura << " m? que chaparro.";
    {
        std::cout << " ¿Cúal es tu sexo? ";
        std::cin >> sexo;
        if (apodo == sexo)
        {
            std::cout << "Entonses sos virgen???" << std::endl;
        }
        else
        {
            std::cout << "Ensonces sos " << sexo << std::endl;
        }
    }


    std::cout << "Tal vez te lo debí de preguntar antes pero ¿Cúal es tu nombre? ";
    std::cin >> nombre;
    std::cout << "Te dire " << nombre << " ¿te parece? ¿No? bueno continuemos con las operaciones";
    //Operaciones (Suma, resta, multiplicación y división)
    std::cout << " de Edad y Altura:" << std::endl;

    //Suma
    std::cout << "Suma: " << Edad + Altura << std::endl;

    //Resta
    std::cout << "1.- Resta: " << Edad - Altura << std::endl;

    //Multiplicación
    std::cout << "2.- Multiplicación: " << Edad * Altura << std::endl;

    // División
    if (Altura != 0) {
        std::cout << "3.- División: " << Edad / Altura << std::endl;
    }
    else {
        std::cout << "3.- No se puede dividir por cero." << std::endl;
    }

    //Raíz cuadrada
    float raíz = sqrt(Edad);
    std::cout << "4.- La raíz cuadrada de " << Edad << " (tu edad) es " << raíz << std::endl;

    std::cout << "5.- " << Edad << " (tu edad) elevado al cuadrado es " << Edad * Edad << std::endl;

    if (Edad < 0) {
        Edad = -Edad;
    }

    std::cout << "6.- El valor absoluto es: " << Edad << std::endl;

    std::cout << "Muy bien " << nombre << "eso es todo muchas gracias. :)";

    return 0;
}
