
#include <Locale>
#include <iostream>
#include <string>

void bosque();
void cueva();
void monta�a();

int main() 
{
    std::locale::global(std::locale("en_US.UTF-8"));

    int decision;
    std::cout << "Bienvenido a la aventura de Juancho. Juancho un joven de 28 a�os ha vivido toda su vida en su casa, que, atras tienes una seire de ccaminos, siempre a tenido curiosidad de saber que hay en esos lugares \n";
    std::cout << "pero con solo arsercarse le entra un profundo panico y regresa cagando leches a su casa, un dia el viejo del pueblo Aron le comento sobre la existencia de un legendario y antiguo tesoro \n";
    std::cout << "Juncho con intriga le pregunt� donde se enncontraba este tesoro, Aron con entusiasmo que por fin alguien le crea le empieza acontar que nadie sabe la ubicaci�n exacta del tesoro pero que la aventura \n";
    std::cout << "comienza donde los caminos se juntan, Juancho de inmediato supo que se referia a los caminos de detras de su casa y rapido se diriogio a ah�m al darce vuelta para agradecer al viejo ya no se encontraba \n";
    std::cout << "ah� y en su lugar solo habia un pescado. Juancho se preparo y no solo en armamento y herramientas si no que tambien mentalmente, estaba a punto de lograr aquello que a lo tenia tanto pavor.\n";
    std::cout << "Al estar frente a los caminos se preparo y tomo una desici�n: \n";
    std::cout << "Te encuentras de tu casa tienes frente de ti los tres caminos: \n";
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
        std::cout << "Decisi�n no v�lida. La mam� de Juancho lo rega�a y le castiga el nintendo (28 a�os tiene la criatura). \n";
    }

    return 0;
}

void bosque() 
{
    int apuesta;
    int decision;
    std::cout << "\nTe adentras en el bosque. Todo est� en silencio excepto por el crujir de las ramas bajo tus pies.\n";
    std::cout << "Encuentras un r�o con un puente viejo. �Qu� haces?\n";
    std::cout << "1. Cruzas el puente.\n";
    std::cout << "2. Sigues el r�o por la orilla.\n";
    std::cin >> decision;

    if (decision == 1) 
    {
        std::cout << "\nEl puente se rompe y caes al r�o.Aunque te lastimas, encuentras un cofre con el tesoro legendario, Juancho es muy responsable financiera mente, �que deveria hacer ? .�Has ganado!\n";
        std:: cout << "1. Apostarlo todo al Rojo\n";
        std:: cout << "2. Invertirlo en bitcoin\n";
            std::cin >> apuesta;
            if (apuesta == 1)
            {
                std::cout << "\nJuacho lo pierde todo y lo sacan a patadas del cacino.\n";
            }
            else if (decision == 2)
            {
                std::cout << "\nEn cuando Juancho invierte la humanidad se da cuenta de que las cripto monedas le hacen m�s mal que bien a la sociedad por lo que deciden descontinuarlas sin rembolsos\n";
            }
            else
            {
                std::cout << "\nJuanchop lo guarda bajo su colchon, quien diria que seria le mejor opci�n\n";
            }

    }
    else if (decision == 2) 
    {
        std::cout << "\nSigues el r�o hasta que anochece. Sin rumbo, decides volver. El tesoro permanece perdido. Fin.\n";
    }
    else 
    {
        std::cout << "\nDecisi�n no v�lida. Te pierdes en el bosque y Juancho muere de abstinencia al nintendo.\n";
    }
}

void cueva() 
{
    int oso;
    int decision;
    std::cout << "\nEntras a la cueva y ves un resplandor al fondo. Tambi�n escuchas un gru�ido detr�s de ti.\n";
    std::cout << "�Qu� haces?\n";
    std::cout << "1. Corres hacia el resplandor.\n";
    std::cout << "2. Te escondes detr�s de unas rocas.\n";
    std::cin >> decision;

    if (decision == 1) 
    {
        std::cout << "\nEncuentras un tesoro rodeado de trampas. Al intentar tomarlo, una flecha te hiere y debes escapar con las manos vac�as, al llegar a casa buscando la ayuda de tu madre, al verte te mete un escobaso en la espalda que la termina rompiendo\n";
            std::cout << "a quedas tirado en el suelo de tu casa desangrandote por una flecha y con la espalde herida. Fin.\n";
    }
    else if (decision == 2) 
    {
        std::cout << "\nEl gru�ido pertenece a un oso. Juancho rapidamente se esconde e idea dos planes\n";
        std::cout << "1. Crear un juego de mesa y mostrarselo al oso\n";
        std::cout << "2. CORRER\n";
        std::cin >> oso;
        if (oso == 1)
        {
            std::cout << "El oso queda asombrado con tu juego y queda distraido lo que te la una ventana de escapar y regresas a casa\n";
        }
        else if (oso == 2)
        {
            std::cout << "El oso te alcanza y pues digamso que aqui termino tu aventura de la vida\n";
        }
        else
        {
            std::cout << "El oso se te queda con cara de WTF por que no hace nada este y te ataca\n";
        }
    }
    else 
    {
        std::cout << "\nDecisi�n no v�lida. El oso te encuentra y la aventura de la vida termina.\n";
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
        std::cout << "\nLlegas a la cima y encuentras un viejo mapa que conduce al tesoro. Cuando intentas irte te das cuenta que tus piernas estan congeladas y en tu deseperaci�n caes y ruedas toda la monta�a formando una bola de nieve\m";
            std::cout << "llegas a tu casa vivo a duras penas y tu mam� te rega�a\n";
    }
    else if (decision == 2) 
    {
        std::cout << "\nMientras descansas, una tormenta te obliga a bajar de la monta�a. Al bajar te das cuenta que te teletransportaste a otro lugar, intentas saber donde estas, a lo lejos ves a chespirito por lo que crees que estas en el cielo\n";
        std::cout << "pero ves como empieza a boxear a Godzia mientras que Spider-Man les dispara, descubres que estas en fortnite y prefieres morir en la tormenta que seguir en ese lugar. FIN\n";
    }
    else 
    {
        std::cout << "\nDecisi�n no v�lida. La tormenta te sorprende y debes abandonar la aventura pero te boxean y te meten un 200 a casa.\n";
    }
}
