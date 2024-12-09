#include <iostream>
#include <string>

void bosque();
void cueva();
void monta�a();

int main() 
{
    int decision;
    std::cout << "Bienvenido a la aventura de Juancho, un joven explorador en busca de un tesoro legendario.\n";
    std::cout << "Te encuentras en un claro del bosque, frente a tres caminos: \n";
    std::cout << "1. Un oscuro bosque lleno de misterios.\n";
    std::cout << "2. Una cueva profunda con sonidos extra�os.\n";
    std::cout << "3. Una monta�a escarpada cubierta de niebla.\n";
    std::cout << "�Cu�l camino eliges? (1, 2, 3): ";
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
        monta�a();
        break;
    default:
        std::cout << "Decisi�n no v�lida. El juego ha terminado.\n";
    }

    return 0;
}

void bosque() 
{
    int decision;
    std::cout << "\nTe adentras en el bosque. Todo est� en silencio excepto por el crujir de las ramas bajo tus pies.\n";
    std::cout << "Encuentras un r�o con un puente viejo. �Qu� haces?\n";
    std::cout << "1. Cruzas el puente.\n";
    std::cout << "2. Sigues el r�o por la orilla.\n";
    std::cin >> decision;

    if (decision == 1) 
    {
        std::cout << "\nEl puente se rompe y caes al r�o. Aunque te lastimas, encuentras un cofre con el tesoro legendario. �Has ganado!\n";
    }
    else if (decision == 2) 
    {
        std::cout << "\nSigues el r�o hasta que anochece. Sin rumbo, decides volver. El tesoro permanece perdido. Fin.\n";
    }
    else 
    {
        std::cout << "\nDecisi�n no v�lida. Te pierdes en el bosque y la aventura termina.\n";
    }
}

void cueva() 
{
    int decision;
    std::cout << "\nEntras a la cueva y ves un resplandor al fondo. Tambi�n escuchas un gru�ido detr�s de ti.\n";
    std::cout << "�Qu� haces?\n";
    std::cout << "1. Corres hacia el resplandor.\n";
    std::cout << "2. Te escondes detr�s de unas rocas.\n";
    std::cin >> decision;

    if (decision == 1) 
    {
        std::cout << "\nEncuentras un tesoro rodeado de trampas. Al intentar tomarlo, una flecha te hiere y debes escapar con las manos vac�as. Fin.\n";
    }
    else if (decision == 2) 
    {
        std::cout << "\nEl gru�ido pertenece a un oso. Al esconderte haces un juego de mesa, el oso queda facinado y se distrea durante esta ventana decides salir de la cueva. El tesoro queda olvidado. Fin.\n";
    }
    else 
    {
        std::cout << "\nDecisi�n no v�lida. El oso te encuentra y la aventura termina.\n";
    }
}

void monta�a() 
{
    int decision;
    std::cout << "\nSubes la monta�a con dificultad. La niebla dificulta tu visi�n.\n";
    std::cout << "Encuentras un campamento abandonado con suministros. �Qu� haces?\n";
    std::cout << "1. Tomas los suministros y sigues subiendo.\n";
    std::cout << "2. Descansas en el campamento.\n";
    std::cin >> decision;

    if (decision == 1) 
    {
        std::cout << "\nLlegas a la cima y encuentras un viejo mapa que conduce al tesoro. �La aventura apenas comienza!\n";
    }
    else if (decision == 2) 
    {
        std::cout << "\nMientras descansas, una tormenta te obliga a bajar de la monta�a. La b�squeda del tesoro queda inconclusa, te dirijes a pisos picados y de un snipaso te derriban. Fin.\n";
    }
    else 
    {
        std::cout << "\nDecisi�n no v�lida. La tormenta te sorprende y debes abandonar la aventura pero te boxean y te meten un 200 a casa.\n";
    }
}
