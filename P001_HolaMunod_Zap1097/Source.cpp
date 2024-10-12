// Zap1097_Hola_Mundo.cpp : Este archivo contiene la funci�n "main". La ejecuci�n del programa comienza y termina ah�.
//Gonzalo Robles
//Este archivo contiene la funci�n
//"main". La ejecuci�n del programa
//comienza y termina aqu�
//
// STD::

#include <iostream>
#include <math.h>
#include <time.h>
#include <Locale>//Libreria para cambiar idioma
#include <codecvt>//Librerias para cambiar codigos de UTF
#include <string>

int main()
{   //Maneras de configurar para que soporte � y acentos
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

    //Hablemos con el usuario y solisitemos la informaci�n.
    std::cout << "Cuentame!! Que edad tienes? ";
    std::cin >> Edad;
    std::cout << "Entonces tienes. " << Edad << " de edad,  exelente, pasele joven.";

    //Hablemos con el usuario
    std::cout << " �Cual es t� altura?";
    std::cin >> Altura;
    std::cout << "Entonces mides " << Altura << " m? que chaparro.";
    {
        std::cout << " �C�al es tu sexo? ";
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


    std::cout << "Tal vez te lo deb� de preguntar antes pero �C�al es tu nombre? ";
    std::cin >> nombre;
    std::cout << "Te dire " << nombre << " �te parece? �No? bueno continuemos con las operaciones";
    //Operaciones (Suma, resta, multiplicaci�n y divisi�n)
    std::cout << " de Edad y Altura:" << std::endl;

    //Suma
    std::cout << "Suma: " << Edad + Altura << std::endl;

    //Resta
    std::cout << "1.- Resta: " << Edad - Altura << std::endl;

    //Multiplicaci�n
    std::cout << "2.- Multiplicaci�n: " << Edad * Altura << std::endl;

    // Divisi�n
    if (Altura != 0) {
        std::cout << "3.- Divisi�n: " << Edad / Altura << std::endl;
    }
    else {
        std::cout << "3.- No se puede dividir por cero." << std::endl;
    }

    //Ra�z cuadrada
    float ra�z = sqrt(Edad);
    std::cout << "4.- La ra�z cuadrada de " << Edad << " (tu edad) es " << ra�z << std::endl;

    std::cout << "5.- " << Edad << " (tu edad) elevado al cuadrado es " << Edad * Edad << std::endl;

    if (Edad < 0) {
        Edad = -Edad;
    }

    std::cout << "6.- El valor absoluto es: " << Edad << std::endl;

    std::cout << "Muy bien " << nombre << "eso es todo muchas gracias. :)";

    return 0;
}
