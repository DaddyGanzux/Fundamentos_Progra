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


int enfrentamiento(const Jugador& j1, const Jugador& j2) 
{
    int puntuacion1 = j1.velocidad + j1.fuerza + j1.inteligencia + j1.resistencia;
    int puntuacion2 = j2.velocidad + j2.fuerza + j2.inteligencia + j2.resistencia;
    return puntuacion1 > puntuacion2 ? 1 : 2;
}


void mostrarJugador(const Jugador& jugador) 
{
    std::cout << "Jugador: " << jugador.nombre << ", Velocidad=" << jugador.velocidad
        << ", Fuerza=" << jugador.fuerza << ", Inteligencia=" << jugador.inteligencia
        << ", Resistencia=" << jugador.resistencia << ", Eliminado=" << (jugador.eliminado ? "Sí" : "No") << std::endl;
}

int main()
{
    std::locale::global(std::locale("en_US.UTF-8"));

    srand(static_cast<unsigned int>(time(0))); 

  
    std::vector<std::string> nombres =
    {
        "Ivan", "Jose", "Ivan Peña", "Sebas", "Jorge", "Rubén", "Aron", "Auronplay",
        "Baitybait", "Mariano", "Marikar", "Osito_Bimobo", "Dr_Simi", "Mama_Lucha", "PikaPika",
        "Lenteja", "Mau", "Diego", "Jose_Jose", "Zi"
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


    while (count_if(jugadores.begin(), jugadores.end(), [](const Jugador& j) { return !j.eliminado; }) > 1) 
    {
        for (size_t i = 0; i < jugadores.size(); i++) 
        {
            if (jugadores[i].eliminado) continue;
            for (size_t j = i + 1; j < jugadores.size(); j++) 
            {
                if (jugadores[j].eliminado) continue;

                int ganador = enfrentamiento(jugadores[i], jugadores[j]);
                if (ganador == 1) 
                {
                    jugadores[j].eliminado = true;
                }
                else 
                {
                    jugadores[i].eliminado = true;
                    break;
                }
            }
        }
    }

    auto ganador = find_if(jugadores.begin(), jugadores.end(), [](const Jugador& j) { return !j.eliminado; });
    std::cout << "\n¡El ganador es " << ganador->nombre << "!\n";
    mostrarJugador(*ganador);

    return 0;
}
