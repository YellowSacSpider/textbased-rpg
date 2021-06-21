#include "Collisions.h"
#include "Map.h"
#include "Fight.h"

bool isObjectPosition(Player &PlayerObj, Enemy &EnemyObj, int x, int y) {
	if (x == EnemyObj.x && y == EnemyObj.y && EnemyObj.isAlive && PlayerObj.isAlive) {
		std::cout << "Collided with Enemy!\n";
		Fight(PlayerObj, EnemyObj);
		return true;
	}
	return false;
}