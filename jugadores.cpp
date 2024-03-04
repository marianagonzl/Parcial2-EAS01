#include <iostream>
#include <string>
#include <cstdlib> // Función rand().
#include <ctime>   // Función time() para generar una nueva seed aleatoria.
using namespace std;

#define log(x) cout << x << endl;

class Jugador
{
    /*
        Agrega propiedades para guardar la vida(número entero), ataque(número entero) y nombre del jugador.
        Agrega una propiedad para guardar el jugador que lo atacó por última vez.
    */
public:
    int vida;
    int ataque;
    string nombreJugador;
    Jugador *atacador;

    Jugador();
    Jugador(/* agrega parámetros para asignar hp, ataque y nombre */ int vida, int ataque, string nombreJugador);

    void atacar(/* agregar parámetros para atacar a otro jugador*/ int vida, int ataque, string nombreJugador);
};

int main()
{
    srand(time(0)); // Seed para generar valores aleatorios

    /*
        Crear al menos 2 jugadores con diferentes nombres, vida y ataque.
        Los jugadores deben atacarse entre sí, tomando turnos, hasta que uno pierda toda su vida.
        En cuanto la vida del jugador se reduzca a 0 el programa muestra al ganador y se termina.
        No importa quien ataca primero.
    */
    Jugador p1;
    p1.nombreJugador = "Mariana";
    p1.vida = 99;
    p1.ataque = 15;

    Jugador p2;
    p2.nombreJugador = "Jaden";
    p2.vida = 79;
    p2.ataque = 12;

    if (p1.vida = 0)
    {
        LOG("Gana jugador 2");
    }
    if (p2.vida = 0)
    {
        LOG("Gana jugador 1");
    }
    return 0;
}

Jugador::Jugador()
{
    /*
        Asignar 100 a hp y 5 a attack como valores default.
        Asignar 'No definido' al nombre como default.
    */
    this->vida = 100;
    this->ataque = 5;
    this->nombreJugador = "No definido";
}

Jugador::Jugador(/* Agrega parámetros para asignar hp, ataque y nombre*/ int vida, int ataque, string nombreJugador)
{
    /*
        Asignar los parámetros recibidos a las propiedades del objeto.
        No se pueden asignar valores negativos a hp y attack.
        Máximo 200 hp y 20 attack
    */
    this->vida = vida;
    this->ataque = ataque;
    this->nombreJugador = nombreJugador;

    if (vida < 0)
    {
        vida = 1;
    }

    if (ataque < 0)
    {
        ataque = 1;
    }

    if (vida > 200)
    {
        vida = 200;
    }

    if (ataque > 20)
    {
        ataque = 20;
    }
}

void Jugador::atacar(/* Agregar parámetros para atacar a otro Jugador */ int vida, int ataque, string nombreJugador)
{
    /*
        El jugador atacado(el que recibes como parámetro) pierde HP igual al ataque del jugador que ataca.
        Existe un 20% de probabilidad de que el ataque falle y no haga daño.
        Se debe mostrar lo que pasó en cada ataque:
        nombre1 atacó a nombre2 e hizo 5 de daño, vida restante de nombre2 = 95
        nombre2 atacó a nombre1 pero fallo, vida restante de nombre1 = 100
        El jugador que atacó debe quedar guardar en la propiedad atacadoPor del jugador atacado.
    */
    /*
    Nota:
        int x = rand() % 1000; asigna un valor aleatorio entre 0 y 999 a x;
        Puedes usar esto para la probabilidad del ataque.
    */

  for (int i=0; i<vida; i--)
    log(nombre " ataco a " nombre);
    log("Hizo " attack " de daño");
    log("Vida restante de: " vida);
    p1.atacar(Jugador* atacador);
}