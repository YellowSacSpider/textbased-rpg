#include "Fight.h"


void Fight(Player& PlayerObj, Enemy& EnemyObj) {
	//system("cls");
	std::cout << "Battle stats: \n";
	std::cout << "Player DMG: " << PlayerObj.DMG << " |VS| " << "Enemy DMG: " << EnemyObj.DMG << '\n';
	std::cout << "Player HP: " << PlayerObj.HP << " |VS| " << "Enemy HP: " << EnemyObj.HP << '\n';
	char getKey;
	while (true){

		if (EnemyObj.HP > 0 && EnemyObj.isAlive) {
			EnemyObj.HP -= PlayerObj.DMG;
			std::cout << "You deal: " << PlayerObj.DMG << " to enemy! \n";
			Sleep(1000);
		}

		if (EnemyObj.HP <= 0) {
			std::cout << "You win! \n";
			EnemyObj.isAlive = false;
			map[PlayerObj.y][PlayerObj.x] = 'P';
			map[EnemyObj.y][EnemyObj.x] = '#';
			break;
		}

		if (PlayerObj.HP > 0 && PlayerObj.isAlive) {
			PlayerObj.HP -= EnemyObj.DMG;
			std::cout << "Enemy deal: " << EnemyObj.DMG << " to you! \n";
			Sleep(1000);
		}

		if (PlayerObj.HP <= 0) {
			std::cout << "You died! \n";
			PlayerObj.isAlive = false;
			map[EnemyObj.y][EnemyObj.x] = 'E';
			map[PlayerObj.y][PlayerObj.x] = '#';
			break;
		}
	}
	std::cout << "Press q to leave the battle \n";
	std::cin >> getKey;
	if (getKey == 'q') {
		Sleep(2000);
	}
}