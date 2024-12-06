// P021_Battle_Royale_Zap1097.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>


enum PowerUp { VELOCIDAD, FUERZA, INTELIGENCIA, RESISTENCIA };

struct Jugador 
{
    std::string nombre;
    int velocidad;
    int fuerza;
    int inteligencia;
    int resistencia;
    bool eliminado;
};

int generarValor()
{
    return rand() % 51;
}


void aplicarPowerUp(Jugador& jugador) 
{
    PowerUp powerUp = static_cast<PowerUp>(rand() % 4);
    int bono = rand() % 21 + 10; 
    switch (powerUp) 
    {
    case VELOCIDAD:
        jugador.velocidad += bono;
        break;
    case FUERZA:
        jugador.fuerza += bono;
        break;
    case INTELIGENCIA:
        jugador.inteligencia += bono;
        break;
    case RESISTENCIA:
        jugador.resistencia += bono;
        break;
    }
}

void mostrarJugador(const Jugador& jugador)
{
    std::cout << "Jugador: " << jugador.nombre << ", Velocidad=" << jugador.velocidad
        << ", Fuerza=" << jugador.fuerza << ", Inteligencia=" << jugador.inteligencia
        << ", Resistencia=" << jugador.resistencia << ", Eliminado=" << (jugador.eliminado ? "Sí" : "No") << std::endl;
}

Jugador encontrarGanadorPorCategoria(const std::vector<Jugador>& jugadores, PowerUp categoria)
{
    auto comp = [categoria](const Jugador& j1, const Jugador& j2)
        {
            switch (categoria)
            {
            case VELOCIDAD:
                return j1.velocidad < j2.velocidad;
            case FUERZA:
                return j1.fuerza < j2.fuerza;
            case INTELIGENCIA:
                return j1.inteligencia < j2.inteligencia;
            case RESISTENCIA:
                return j1.resistencia < j2.resistencia;
            }
            return false;
        };

    return *std::max_element(jugadores.begin(), jugadores.end(), comp);
}

int main()
{
    int  ganadorusve;
    int ganadorusfu;
    int ganadorusin;
    int ganadorusre;

    std::locale::global(std::locale("en_US.UTF-8"));

    srand(static_cast<unsigned int>(time(0)));

    std::vector<std::string> nombres =
    {
        "Ivan", "Peña", "Ivan Peña", "Sebas", "Jorge", "Rubén", "Aron", "Auronplay",
        "Baitybait", "Mariano", "Marikar", "Osito Bimbo", "Dr. Simi", "Mama Lucha", "PikaPika",
        "Lenteja", "Mau", "Diego", "José_José", "Esteban"
    };

    std::vector<Jugador> jugadores;
    for (const auto& nombre : nombres)
    {
        Jugador jugador = { nombre, generarValor(), generarValor(), generarValor(), generarValor(), false };
        aplicarPowerUp(jugador);
        jugadores.push_back(jugador);
    }

    std::cout << "Jugadores iniciales:\n";
    for (const auto& jugador : jugadores)
    {
        mostrarJugador(jugador);
    }

    Jugador ganadorVelocidad = encontrarGanadorPorCategoria(jugadores, VELOCIDAD);
    Jugador ganadorFuerza = encontrarGanadorPorCategoria(jugadores, FUERZA);
    Jugador ganadorInteligencia = encontrarGanadorPorCategoria(jugadores, INTELIGENCIA);
    Jugador ganadorResistencia = encontrarGanadorPorCategoria(jugadores, RESISTENCIA);

    std::cout << "Anota tus apuestas\n";
    std::cout << "¿Quien crees que gane por velocidad?\n";
    std::cin >> ganadorusve;
    std::cout << "¿Quien crees que gane por fuerza?\n";
    std::cin >> ganadorusfu;
    std::cout << "¿Quien crees que gane por Inteligencia?\n";
    std::cin >> ganadorusin;
    std::cout << "¿Quien crees que gane por Resistencia?\n";
    std::cin >> ganadorusre;

    std::cout << "\n¡Ganadores por categoría!\n";
    std::cout << "Velocidad: " << ganadorVelocidad.nombre << " (Velocidad=" << ganadorVelocidad.velocidad << ")\n";
    std::cout << "Fuerza: " << ganadorFuerza.nombre << " (Fuerza=" << ganadorFuerza.fuerza << ")\n";
    std::cout << "Inteligencia: " << ganadorInteligencia.nombre << " (Inteligencia=" << ganadorInteligencia.inteligencia << ")\n";
    std::cout << "Resistencia: " << ganadorResistencia.nombre << " (Resistencia=" << ganadorResistencia.resistencia << ")\n";

   
    return 0;
}
