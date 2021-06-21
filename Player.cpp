#include "Map.h"
#include "Collisions.h"
#include "Fight.h"


void PlayerMove(Player& PlayerObj, Enemy& EnemyObj) {
	char Key = 0;
	DrawMap();
	DrawUI(PlayerObj);
	while (Key != 'q') {
		std::cout << "\n>> ";
		Key = std::cin.get();

		if (Key == 'w') {
			map[PlayerObj.y][PlayerObj.x] = '#';
			if (!isObjectPosition(PlayerObj, EnemyObj, PlayerObj.x, PlayerObj.y - 1) && PlayerObj.isAlive && PlayerObj.y - 1 != (MAP_SIZE - MAP_SIZE) - 1) {
				--PlayerObj.y;
			}
		}
		else if (Key == 'a') {
			map[PlayerObj.y][PlayerObj.x] = '#';
			if (!isObjectPosition(PlayerObj, EnemyObj, PlayerObj.x - 1, PlayerObj.y) && PlayerObj.isAlive && PlayerObj.x - 1 != (MAP_SIZE - MAP_SIZE)-1) {
				--PlayerObj.x;
			}
		}
		else if (Key == 's') {
			map[PlayerObj.y][PlayerObj.x] = '#';
			if (!isObjectPosition(PlayerObj, EnemyObj, PlayerObj.x, PlayerObj.y + 1) && PlayerObj.isAlive && PlayerObj.y + 1 != (MAP_SIZE)) {
				++PlayerObj.y;
			}
		}
		else if (Key == 'd') {
			map[PlayerObj.y][PlayerObj.x] = '#';
			if (!isObjectPosition(PlayerObj, EnemyObj, PlayerObj.x + 1, PlayerObj.y) && PlayerObj.isAlive && PlayerObj.x + 1 != (MAP_SIZE)) {
				++PlayerObj.x;
			}
		}
		system("cls");
		if (PlayerObj.isAlive) {
			map[PlayerObj.y][PlayerObj.x] = 'P';
		}
		//isEnemyPosition(PlayerObj.y, PlayerObj.x);
		DrawMap();
		DrawUI(PlayerObj);
	}
}



