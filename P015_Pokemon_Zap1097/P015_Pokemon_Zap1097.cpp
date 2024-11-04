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
        int da�o = std::max(0, ataque - enemigo.defensa);
        da�o += generarNumeroAleatorio(0, 30);
        enemigo.salud -= da�o;
        std::cout << nombre << " ataca a " << enemigo.nombre << " causando " << da�o << " de da�o." << std::endl;
        if (enemigo.salud < 0) enemigo.salud = 0;
    }

    // Para mostrar el estado
    void mostrarEstado() const {
        std::cout << nombre << " - Salud: " << salud << std::endl;
    }

    // Para verificar si est� vivo
    bool estaVivo() const {
        return salud > 0;
    }
};

// Funci�n principal del juego
void juegoRPG() 
{
   
    char respuesta;

    std::string qw = "Bienvenido al Simulador de RPG!\n";
    imprimirLento(qw, 60);

    std::string qwe = "En un peque�o granero en Kentucky, naci� un pollo llamado Cluck Norris, un gallo valiente y decidido. Su vida cambi� para siempre cuando el Coronel Sanders lleg� al pueblo, buscando pollos para su exitoso restaurante de pollo frito. Los hermanos de Cluck fueron capturados y llevados al restaurante, nunca para volver.\n";
    imprimirLento(qwe, 40);

    std::string qwer = "Cluck jur� venganza y comenz� su entrenamiento en secreto.Aprendi� artes marciales de un viejo ganso llamado `El Maestro� y se forj� una armadura con materiales reciclados.Su espada, un cuchillo de cocina afilado, y su escudo, un plato de metal, estaban listos para la batalla.\n";
    imprimirLento(qwe, 40);

    std::string qe = "Con su armadura puesta, Cluck se dirigi� hacia el restaurante KFC, donde su legendario l�der, el Coronel Sanders, esperaba.Al acercarse, Cluck sinti� la mirada del Coronel a trav�s de la ventana. El Coronel sonri�, sabiendo que otro pollo no podr�a detener su imperio.\n";
    imprimirLento(qe, 40);

    std::string qr = "Cluck lleg� a la puerta y, con un golpe poderoso, la abri�. `�Vengo por mis hermanos!�, grit�. El Coronel se ri� y llam� a sus guardias. Cluck se prepar� para la lucha, listo para enfrentar cualquier obst�culo que se interpusiera entre �l y la libertad de sus hermanos.\n";
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
                std::string qt = "El cornonel tiene el men� de ma�ana\n";
                imprimirLento(qt, 70);
                break;
            }

    }
}

int main() {
    juegoRPG();
    return 0;
}
