#ifndef MAP_H
#define MAP_H
#include <iostream>
#include "Enemy.h"
#include "Player.h"

constexpr int MAP_SIZE = 8;
extern char map[MAP_SIZE][MAP_SIZE];


void InitMap(Player &PlayerObj, Enemy &EnemyObj);
void DrawMap();
void DrawUI(Player& PlayerObj);
#endif