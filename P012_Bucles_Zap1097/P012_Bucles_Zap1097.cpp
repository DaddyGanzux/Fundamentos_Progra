#include <iostream>
#include <cstdlib>

int main()
{
	int contador = 0;
    
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Esto se ejecutara hasta que pierdas tus " << i << " vidas... \n";
        std::cout << "Presiona una tecla...\n";
        system("pause");
        std::cout << "perdiste lero lero \n";
        system("Color 02");
        system("cls");
    }


    while (contador <= 99)
    {
        contador++; 
        std::cout << "El contador va en: " << contador << std::endl;
    }
    
    do
    {
        contador--;
        std::cout << "El contador DO WHILE va en: " << contador << std::endl;
    } while (contador >= 1);

}