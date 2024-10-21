#include <iostream>
#include <cstdlib>

int main()
{
    //Sintaxys 1.- While
    int contador = 0;
    // Declaraci�n de funci�n while
    // Mientras el contador sea menor a 100.
    while (contador <= 100)
    {
        contador++; // Aumento del contador en 1.
        //Contador = contador + 2; Aumento del contador de 2 en 2.
        std::cout << "El contador va en: " << contador << std::endl;
    }
    //Sintaxys 2.- DO While
    // Siempre se ejecuta por lo menos una vez.
    // Declaraci�n
    do
    {
        contador--;
        std::cout << "El contador DO WHILE va en: " << contador << std::endl;
    } while (contador >= 0);
    //Sintaxys 3.- FOR
    // La extructura de control m�s segura
    // en su declaraci�n colocamos el inicio y el final
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Esto se ejecutar� hasta que pierdas tus " << i << " vidas... \n";
        std::cout << "Presiona una tecla...\n";
        system("pause");
        std::cout << "jaja perdiste una vida vuelve a intentarlo u.u \n";
        system("Color 1f");
        system("cls");
    }
}
/*Codigo
        Color
0    Negro
1    Azul
2    Verde
3    Celeste cielo
4    Rojo
5    Morado
6    Amarillo
7    Blanco hueso
8    Gris
9    Celeste
a    Verde claro
b    Celeste claro
c    Rojo fuerte
d    Morado oscuro
e    Color crema
f    Blanco puro

        */
