// Proyecto 2 - Historia Narradav2_Zap1097.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <Locale>
#include <iostream>
#include <string>


int main()
{
    char opcion;
    do
    {
        system("cls");

        std::locale::global(std::locale("en_US.UTF-8"));

        int oso;
        int apuesta;
        int decision1;
        int decision2;
        int decision3;
        int decision4;
        std::cout << "Bienvenido a la aventura de Juancho. Juancho un joven de 28 años ha vivido toda su vida en su casa, que, atras tienes una serie de caminos, siempre a tenido curiosidad de saber que hay en esos lugares \n";
        std::cout << "pero con solo arcercarse le entra un profundo panico y regresa cagando leches a su casa, un dia el viejo del pueblo Aron le comento sobre la existencia de un legendario y antiguo tesoro \n";
        std::cout << "Juncho con intriga le preguntó donde se enncontraba este tesoro, Aron con el entusiasmo de que por fin alguien le creía le empieza acontar que nadie sabe la ubicación exacta del tesoro pero que la aventura \n";
        std::cout << "comienza donde los caminos se juntan, Juancho de inmediato supo que se referia a los caminos de detras de su casa y rapido se diriogio a ahí al darce la vuelta para agradecer al viejo ya no se encontraba \n";
        std::cout << "ahí y en su lugar solo habia un pescado. Juancho se preparo y no solo en armamento y herramientas si no que tambien mentalmente, estaba a punto de lograr aquello a lo que tenia tanto pavor.\n";
        std::cout << "Al estar frente a los caminos se preparo y tomo una desición: \n";
        std::cout << "Te encuentras de tu casa tienes frente de ti los tres caminos: \n";
        std::cout << "1. Un oscuro bosque lleno de misterios.\n";
        std::cout << "2. Una cueva profunda con sonidos extraños.\n";
        std::cout << "3. Una montaña escarpada cubierta de niebla.\n";
        std::cout << "¿Cuál camino eliges? (1, 2, 3): ";
        std::cin >> decision1;

        switch (decision1)
        {
        case 1:
        {

            std::cout << "\nTe adentras en el bosque. Todo está en silencio excepto por el crujir de las ramas bajo tus pies.\n";
            std::cout << "Encuentras un río con un puente viejo. ¿Qué haces?\n";
            std::cout << "1. Cruzas el puente.\n";
            std::cout << "2. Sigues el río por la orilla.\n";
            std::cin >> decision2;

            if (decision2 == 1)
            {
                std::cout << "\nEl puente se rompe y caes al río.Aunque te lastimas, encuentras un cofre con el tesoro legendario, Juancho es muy responsable financiera mente, ¿que deveria hacer?\n";
                std::cout << "1. Apostarlo todo al Rojo\n";
                std::cout << "2. Invertirlo en bitcoin\n";
                std::cin >> apuesta;
                if (apuesta == 1)
                {
                    std::cout << "\nJuacho lo pierde todo y lo sacan a patadas del cacino.\n";
                }
                else if (apuesta == 2)
                {
                    std::cout << "\nEn cuando Juancho invierte la humanidad se da cuenta de que las cripto monedas le hacen más mal que bien a la sociedad por lo que deciden descontinuarlas sin rembolsos\n";
                }
                else
                {
                    std::cout << "\nJuancho lo guarda bajo su colchon, quien diria que seria le mejor opción\n";
                }

            }
            else if (decision2 == 2)
            {
                std::cout << "\nSigues el río hasta que anochece. Sin rumbo, decides volver. El tesoro permanece perdido. Fin.\n";
            }
            else
            {
                std::cout << "\nDecisión no válida. Te pierdes en el bosque y Juancho muere de abstinencia al nintendo.\n";
            }
        }

        break;
        case 2:
        {

            std::cout << "\nEntras a la cueva y ves un resplandor al fondo. También escuchas un gruñido detrás de ti.\n";
            std::cout << "¿Qué haces?\n";
            std::cout << "1. Corres hacia el resplandor.\n";
            std::cout << "2. Te escondes detrás de unas rocas.\n";
            std::cin >> decision3;

            if (decision3 == 1)
            {
                std::cout << "\nEncuentras un tesoro rodeado de trampas. Al intentar tomarlo, una flecha te hiere y debes escapar con las manos vacías, al llegar a casa buscando la ayuda de tu madre, al verte te mete un escobaso en la espalda que la termina rompiendo\n";
                std::cout << "a quedas tirado en el suelo de tu casa desangrandote por una flecha y con la espalde herida. Fin.\n";
            }
            else if (decision3 == 2)
            {
                std::cout << "\nEl gruñido pertenece a un oso. Juancho rapidamente se esconde e idea dos planes\n";
                std::cout << "1. Crear un juego de mesa y mostrarselo al oso\n";
                std::cout << "2. CORRER\n";
                std::cin >> oso;
                if (oso == 1)
                {
                    std::cout << "El oso queda asombrado con tu juego y queda distraido lo que te da una ventana de escape y regresas a casa\n";
                }
                else if (oso == 2)
                {
                    std::cout << "El oso te alcanza y pues digamos que aqui termino tu aventura de la vida\n";
                }
                else
                {
                    std::cout << "El oso se te queda con cara de WTF por que no hace nada este y te ataca\n";
                }
            }
            else
            {
                std::cout << "\nDecisión no válida. El oso te encuentra y la aventura de la vida termina.\n";
            }
        }

        break;
        case 3:
        {

            std::cout << "\nSubes la montaña con dificultad. La niebla dificulta tu visión.\n";
            std::cout << "Encuentras un campamento abandonado con suministros. ¿Qué haces?\n";
            std::cout << "1. Tomas los suministros y sigues subiendo.\n";
            std::cout << "2. Descansas en el campamento.\n";
            std::cin >> decision4;

            if (decision4 == 1)
            {
                std::cout << "\nLlegas a la cima y encuentras un viejo mapa que conduce al tesoro. Cuando intentas irte te das cuenta que tus piernas estan congeladas y en tu deseperación caes y ruedas toda la montaña formando una bola de nieve\m";
                std::cout << "llegas a tu casa vivo a duras penas y tu mamá te regaña\n";
            }
            else if (decision4 == 2)
            {
                std::cout << "\nMientras descansas, una tormenta te obliga a bajar de la montaña. Al bajar te das cuenta que te teletransportaste a otro lugar, intentas saber donde estas, a lo lejos ves a chespirito por lo que crees que estas en el cielo\n";
                std::cout << "pero ves como empieza a boxear a Godzia mientras que Spider-Man les dispara, descubres que estas en fortnite y prefieres morir en la tormenta que seguir en ese lugar. FIN\n";
            }
            else
            {
                std::cout << "\nDecisión no válida. La tormenta te sorprende y debes abandonar la aventura pero te boxean y te meten un 200 a casa.\n";
            }
            break;
        }

        case 4:
        {
            std::cout << "Decisión no válida. La mamá de Juancho lo regaña y le castiga el nintendo (28 añitos tiene la criatura). \n";
            break;
        }
    }
        
    std::cout << "¿Desea volverlo a intentar?  S   N\n";
    std::cin >> opcion;
    }while (opcion != 'N');
    
    return 0;

}
