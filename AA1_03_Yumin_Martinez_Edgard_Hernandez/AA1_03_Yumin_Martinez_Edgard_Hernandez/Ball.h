#pragma once
#include <iostream>
enum class TypeBall
{
	GREEN,
	RED,
	BLUE,
	YELLOW,
	ORANGE,
	COUNT
};
struct Ball
{
	TypeBall type;
};
struct Player
{
	int score;
	std::string name;
	int position;
	int magazineSize;
	Ball *magazine = new Ball[magazineSize];
	void init(std::string name, int position);
	Ball Shoot();


};
///* Implementar un struct Player.La implementación debe incluir :
//a.Todos los miembros(atributos) necesarios para mantener la información de un jugador.Es
//especialmente importante pensar en cómo se representa a la pistola.
//b.Un método void init(std::string name, int position), que inicializa al
//jugador poniéndole como su identificador a name y colocándolo en la position dada,
//inicializa el score en 0 y carga a la pistola con 30 bolas aleatorias.
//c.Un método Ball shoot() : Dispara 1 bola, la primera que tiene.La bola se elimina del
//cargador y la función la devuelve.

//hazlo


