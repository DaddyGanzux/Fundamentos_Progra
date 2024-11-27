// Zap1097_Bucles_v1 : 
// Gonzalo Robles
// Repasaremos la estructura sintaxys de ciclos y bucles.
// 

#include <iostream>
#include <locale>
#include <string>
#include <cstdlib>
int main()
{
    std::string nombre;
    std::string nombre1;
    bool continuar = true;
    int vidas = 3;
    setlocale(LC_ALL, "en-US");
    system("Color 1f");
    //Vamos a pedirle el nombre al usuario
    std::cout << "Hola usuario bienvenido dame tu nombre:\n";
    getline(std::cin, nombre1); // Esta sentencia recibe espacios
    std::cout << "Entonces tu nombre es: " << nombre1 << std::endl;
    //std::cin.ignore(); //Sirve para limpiar el buffer en caso de necesitarlo
    //std::cout << "dame tu segundo nombre:\n";
    //std::cin >> nombre;// Esta sentencia no puede recibir espacios
    //std::cout << "Entonces tu nombre es: " << nombre << std::endl;
    system("pause");
    system("cls");
    while (continuar == true)
    {
        std::cout << "Te quedan " << vidas << " vidas\n";
        vidas--;
        system("pause");
        system("cls");
        if (vidas == 0)
        {
            std::cout << "Deseas continuar? \n0)NO 1)SI\n";
            std::cin >> continuar;
            system("pause");
            system("cls");
            if (continuar == 1)
            {
                vidas = 3;
                std::cout << "Vuelve a intentarlo\n";
                system("pause");
                system("cls");
            }
            else
            {
                std::cout << "Camara que le vaya bien!\n";
                system("pause");
                system("cls");
            }
        }
        system("cls");
    }

}