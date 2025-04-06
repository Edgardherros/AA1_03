#include "Ball.h"
void Player::init(std::string name, int position)
{
	std::cout << "Enter player name: ";
	std::cin >> name;
	this->name = name;
	this->position = position;
	this->score = 0;
	//this->magazine = 30;
	

}


