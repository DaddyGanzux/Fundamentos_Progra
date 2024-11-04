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
   
    char respuesta;

    std::string qw = "Bienvenido al Simulador de RPG!\n";
    imprimirLento(qw, 60);

    std::string qwe = "En un pequeño granero en Kentucky, nació un pollo llamado Cluck Norris, un gallo valiente y decidido. Su vida cambió para siempre cuando el Coronel Sanders llegó al pueblo, buscando pollos para su exitoso restaurante de pollo frito. Los hermanos de Cluck fueron capturados y llevados al restaurante, nunca para volver.\n";
    imprimirLento(qwe, 40);

    std::string qwer = "Cluck juró venganza y comenzó su entrenamiento en secreto.Aprendió artes marciales de un viejo ganso llamado `El Maestro´ y se forjó una armadura con materiales reciclados.Su espada, un cuchillo de cocina afilado, y su escudo, un plato de metal, estaban listos para la batalla.\n";
    imprimirLento(qwe, 40);

    std::string qe = "Con su armadura puesta, Cluck se dirigió hacia el restaurante KFC, donde su legendario líder, el Coronel Sanders, esperaba.Al acercarse, Cluck sintió la mirada del Coronel a través de la ventana. El Coronel sonrió, sabiendo que otro pollo no podría detener su imperio.\n";
    imprimirLento(qe, 40);

    std::string qr = "Cluck llegó a la puerta y, con un golpe poderoso, la abrió. `¡Vengo por mis hermanos!´, gritó. El Coronel se rió y llamó a sus guardias. Cluck se preparó para la lucha, listo para enfrentar cualquier obstáculo que se interpusiera entre él y la libertad de sus hermanos.\n";
    imprimirLento(qr, 40);

    Personaje jugador("Cluck", 200, 5, 40);
       
    Personaje enemigo("Coronel", 350, -10, 7);

    while (jugador.estaVivo() && enemigo.estaVivo()) 
    {
        std::cout << "Escoje un ataque: 1- ataque ala  2- Picotaso rapido  3- Espadazo\n";
        std::cin >> respuesta;

            jugador.atacar(enemigo);
            enemigo.mostrarEstado();
            if (!enemigo.estaVivo())
            {
                std::cout << enemigo.nombre << " ha sido derrotado!" << std::endl;
                std::cout << "-Coronel: NoOoOoOoOoOoOoOoOoOoO\n";
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

    }
}

int main() {
    juegoRPG();
    return 0;
}
