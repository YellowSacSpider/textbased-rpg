#ifndef PLAYER_H
#define PLAYER_H

#include "Enemy.h"

struct Player {
	int x = 0;
	int y = 0;
	int HP = 100;
	int MAXHP = 100;
	int DMG = 10;
	bool isAlive = true;
};


void PlayerMove(Player& PlayerObj, Enemy& EnemyObj);

#endif
