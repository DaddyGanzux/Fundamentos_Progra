#include <iostream>
#include <Locale>
#include <time.h>
#include <codecvt>
#include <string>
#include <thread>
#include <random>
#include <ctime>


void imprimirLento(const std::string& texto, int retrasoMilisegundos)
{
    for (char c : texto)
    {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(retrasoMilisegundos));
    }
}

int generarNumeroAleatorio(int min, int max) 
{
    static std::mt19937 generador(static_cast<unsigned int>(std::time(0)));
    std::uniform_int_distribution<int> distribucion(min, max);
    return distribucion(generador);
}

class Personaje 
{
public:
    std::string nombre;
    int salud;
    int ataque;
    int defensa;
    int zi;

    Personaje(std::string nombre, int salud, int ataque, int defensa)
        : nombre(nombre), salud(salud), ataque(ataque), defensa(defensa) {}

    void atacar(Personaje& enemigo) 
    {
        int daño = std::max(0, ataque - enemigo.defensa);
        daño += generarNumeroAleatorio(0, 30);
        enemigo.salud -= daño;
        std::cout << nombre << " ataca a " << enemigo.nombre << " causando " << daño << " de daño." << std::endl;
        if (enemigo.salud < 0) enemigo.salud = 0;
    }

    // Para mostrar el estado
    void mostrarEstado() const {
        std::cout << nombre << " - Salud: " << salud << std::endl;
    }

    // Para verificar si está vivo
    bool estaVivo() const {
        return salud > 0;
    }
};

// Función principal del juego
void juegoRPG() 
{
    setlocale(LC_ALL, "Spanish");
   
    std::string maestro = "ganso";
    std::string maestro_u;
    char respuesta;

    std::string qw = "Bienvenido al Simulador de RPG!\n";
    imprimirLento(qw, 60);

    std::string qwe = "En un pequeño granero en Kentucky, nació un pollo llamado Cluck Norris, un gallo valiente y decidido. Su vida cambió para siempre cuando el Coronel Sanders llegó al pueblo, buscando pollos para su exitoso restaurante de pollo frito. Los hermanos de Cluck fueron capturados y llevados al restaurante, nunca para volver.\n";
    imprimirLento(qwe, 40);

    std::string qwer = "Cluck juró venganza y comenzó su entrenamiento en secreto.Aprendió artes marciales de un viejo ganso llamado `El Maestro´ y se forjó una armadura con materiales reciclados.Su espada, un cuchillo de cocina afilado, y su escudo, un plato de metal, estaban listos para la batalla.\n";
    imprimirLento(qwer, 40);

    std::string qe = "Con su armadura puesta, Cluck se dirigió hacia el restaurante KFC, donde su legendario líder, el Coronel Sanders, esperaba.Al acercarse, Cluck sintió la mirada del Coronel a través de la ventana. El Coronel sonrió, sabiendo que otro pollo no podría detener su imperio.\n";
    imprimirLento(qe, 40);

    std::string qr = "Cluck llegó a la puerta y, con un golpe poderoso, la abrió. `¡Vengo por mis hermanos!´, gritó. El Coronel se rió y llamó a sus guardias. Cluck se preparó para la lucha, listo para enfrentar cualquier obstáculo que se interpusiera entre él y la libertad de sus hermanos.\n";
    imprimirLento(qr, 40);

    std::cout << "Presione enter para continuar\n";
    std::cin.get();

    Personaje jugador("Cluck", 250, 20, 40);
       
    Personaje enemigo("Coronel", 350, -10, 7);

    while (jugador.estaVivo() && enemigo.estaVivo()) 
    {
        system("cls");

        std::cout << "Escoje un ataque: 1- ataque ala  2- Picotaso rapido  3- Espadazo\n";
        std::cin >> respuesta;

            jugador.atacar(enemigo);
            enemigo.mostrarEstado();
            if (!enemigo.estaVivo())
            {
                std::cout << enemigo.nombre << " ha sido derrotado!" << std::endl;
                std::cout << "-Coronel: NoOoOoOoOoOoOoOoOoOoO\n";
                std::cout << "El Coroner dispuesto a llevarse a Cluck y a todos sus hermanos carga el ataque mas poderso de todos\n";
                std::cout << "Para esquivar el ataque Cluck recurre al recurso de recordar los amigos que hizo durante la aventura pero...\n";
                std::cout << "¿De que especie era su maestro?\n";
                std::cin.ignore();
                std::getline(std::cin, maestro_u);
                if (maestro == maestro_u)
                {
                    std::string as = "Cluck salio victorioso y esta feliz de volver a ver a sus hermanos\n";
                    imprimirLento(as, 50);
                    break;
                }
                else
                {
                    std::string ad = "Cluck fallo en su cometido y por su mala memoria fallecieron todos los pollos del lugar y de entre las cenizas el Coronel resirje como un fenix llendo a otra de sus sucursales\n";
                    imprimirLento(ad, 50);
                    break;
                }
                break;
            }

            enemigo.atacar(jugador);
            jugador.mostrarEstado();
            if (!jugador.estaVivo())
            {
                std::cout << jugador.nombre << " ha sido derrotado." << std::endl;
                std::string qt = "El cornonel tiene el menú de mañana\n";
                imprimirLento(qt, 70);
                break;
            }

            std::cin.ignore();

            std::cout << "Presione enter para continuar\n";
            std::cin.get();

    }
}

int main() {
    juegoRPG();
    return 0;
}
