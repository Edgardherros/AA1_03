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
///* Implementar un struct Player.La implementaci�n debe incluir :
//a.Todos los miembros(atributos) necesarios para mantener la informaci�n de un jugador.Es
//especialmente importante pensar en c�mo se representa a la pistola.
//b.Un m�todo void init(std::string name, int position), que inicializa al
//jugador poni�ndole como su identificador a name y coloc�ndolo en la position dada,
//inicializa el score en 0 y carga a la pistola con 30 bolas aleatorias.
//c.Un m�todo Ball shoot() : Dispara 1 bola, la primera que tiene.La bola se elimina del
//cargador y la funci�n la devuelve.

//hazlo


