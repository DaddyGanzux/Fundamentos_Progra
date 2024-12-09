#include <iostream>
#include <string>

void bosque();
void cueva();
void montaña();

int main() 
{
    int decision;
    std::cout << "Bienvenido a la aventura de Juancho, un joven explorador en busca de un tesoro legendario.\n";
    std::cout << "Te encuentras en un claro del bosque, frente a tres caminos: \n";
    std::cout << "1. Un oscuro bosque lleno de misterios.\n";
    std::cout << "2. Una cueva profunda con sonidos extraños.\n";
    std::cout << "3. Una montaña escarpada cubierta de niebla.\n";
    std::cout << "¿Cuál camino eliges? (1, 2, 3): ";
    std::cin >> decision;

    switch (decision) 
    {
    case 1:
        bosque();
        break;
    case 2:
        cueva();
        break;
    case 3:
        montaña();
        break;
    default:
        std::cout << "Decisión no válida. El juego ha terminado.\n";
    }

    return 0;
}

void bosque() 
{
    int decision;
    std::cout << "\nTe adentras en el bosque. Todo está en silencio excepto por el crujir de las ramas bajo tus pies.\n";
    std::cout << "Encuentras un río con un puente viejo. ¿Qué haces?\n";
    std::cout << "1. Cruzas el puente.\n";
    std::cout << "2. Sigues el río por la orilla.\n";
    std::cin >> decision;

    if (decision == 1) 
    {
        std::cout << "\nEl puente se rompe y caes al río. Aunque te lastimas, encuentras un cofre con el tesoro legendario. ¡Has ganado!\n";
    }
    else if (decision == 2) 
    {
        std::cout << "\nSigues el río hasta que anochece. Sin rumbo, decides volver. El tesoro permanece perdido. Fin.\n";
    }
    else 
    {
        std::cout << "\nDecisión no válida. Te pierdes en el bosque y la aventura termina.\n";
    }
}

void cueva() 
{
    int decision;
    std::cout << "\nEntras a la cueva y ves un resplandor al fondo. También escuchas un gruñido detrás de ti.\n";
    std::cout << "¿Qué haces?\n";
    std::cout << "1. Corres hacia el resplandor.\n";
    std::cout << "2. Te escondes detrás de unas rocas.\n";
    std::cin >> decision;

    if (decision == 1) 
    {
        std::cout << "\nEncuentras un tesoro rodeado de trampas. Al intentar tomarlo, una flecha te hiere y debes escapar con las manos vacías. Fin.\n";
    }
    else if (decision == 2) 
    {
        std::cout << "\nEl gruñido pertenece a un oso. Al esconderte haces un juego de mesa, el oso queda facinado y se distrea durante esta ventana decides salir de la cueva. El tesoro queda olvidado. Fin.\n";
    }
    else 
    {
        std::cout << "\nDecisión no válida. El oso te encuentra y la aventura termina.\n";
    }
}

void montaña() 
{
    int decision;
    std::cout << "\nSubes la montaña con dificultad. La niebla dificulta tu visión.\n";
    std::cout << "Encuentras un campamento abandonado con suministros. ¿Qué haces?\n";
    std::cout << "1. Tomas los suministros y sigues subiendo.\n";
    std::cout << "2. Descansas en el campamento.\n";
    std::cin >> decision;

    if (decision == 1) 
    {
        std::cout << "\nLlegas a la cima y encuentras un viejo mapa que conduce al tesoro. ¡La aventura apenas comienza!\n";
    }
    else if (decision == 2) 
    {
        std::cout << "\nMientras descansas, una tormenta te obliga a bajar de la montaña. La búsqueda del tesoro queda inconclusa, te dirijes a pisos picados y de un snipaso te derriban. Fin.\n";
    }
    else 
    {
        std::cout << "\nDecisión no válida. La tormenta te sorprende y debes abandonar la aventura pero te boxean y te meten un 200 a casa.\n";
    }
}
