#include "Map.h"



int main()
{
	Player PlayerObj = { MAP_SIZE / 2, MAP_SIZE / 2 };
	Enemy EnemyObj = { 3,3 };

	InitMap(PlayerObj, EnemyObj);
	PlayerMove(PlayerObj, EnemyObj);
}

