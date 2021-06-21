#ifndef ENEMY_H
#define ENEMY_H

struct Enemy {
	int x = 3;
	int y = 3;
	int HP = 100;
	int MAXHP = 100;
	int DMG = 1;
	bool isAlive = true;
};

#endif
