#include <iostream>
#include <math.h>
#include <time.h>
#include <Locale>//Libreria para cambiar idioma
#include <codecvt>//Librerias para cambiar codigos de UTF

int main()
{   //Maneras de configurar para que soporte ñ y acentos
    setlocale(LC_ALL, "Spanish");
    //\n es un salto de linea
    //std::endl;
    int Edad = 0;
    //Sintaxys de Desiciones
    // La palabra reservada es IF 
    //Lo que  este dentro del parentesis si es verdad
    std::cout << "Ostias chaval ¿pero que haces por aquí? ¿Cuantos años tenes?\n";
    std::cin >> Edad;
    if (Edad >= 18)
    {
        //Se ejecuta esto
        std::cout << "Ostias!!! Eres todo un adulto \n";
    }
    //Desiciones dobles Sintaxys
    int Vidas = 0;
    bool continuar = false;
    std::cout << "continue?\n";
    std::cin >> continuar;
    if (continuar)//si esto es verdadero 
    {
        //Se ejecuta esto
        std::cout << "Elegiste verdadero osea continuar \n";
        std::cout << "Deposita todo el cambio de las tortillas para tener otra oportunidad \n";
    }
    else {

        //Si es falso se ejecuta esto
        std::cout << "Elegiste Falso osea salir \n";
        std::cout << " Orale vallase al ranchito de amlo y llevale las tortillas a tu mamita que de seguro trae hambre y de por si ya te va a pegar por gastarte el cambio, asi que orale.";
    }
    //Terminando la ejecución se vendra a esta linea
    // Si es falso ejecuta derecto a esta linea.
    std::cout << "Salid de aqui crio vete al preescolar.";
}