#include "Map.h"


char map[MAP_SIZE][MAP_SIZE] = { 0 };

void DrawUI(Player& PlayerObj){
	std::cout << "\n\n\nStats: \n";
	std::cout << "Player DMG: " << PlayerObj.DMG << '\n';
	std::cout << "Player HP: " << PlayerObj.HP << '\n';
	std::cout << "----------------------------------------" << '\n';
	std::cout << "\t\tX: " << PlayerObj.x << '\n';
	std::cout << "\t\tY: " << PlayerObj.y << '\n';
	std::cout << "----------------------------------------" << '\n';
}

void InitMap(Player &PlayerObj, Enemy &EnemyObj) {
	for (int i = 0; i < MAP_SIZE; i++) {
		for (int j = 0; j < MAP_SIZE; j++) {
			map[i][j] = '#';
		}
	}
	map[MAP_SIZE / 2][MAP_SIZE / 2] = 'P';
	map[EnemyObj.y][EnemyObj.x] = 'E';
}

void DrawMap() {
	for (int i = 0; i < MAP_SIZE; i++) {
		for (int j = 0; j < MAP_SIZE; j++) {
			std::cout << map[i][j];
		}
		std::cout << '\n';
	}
}