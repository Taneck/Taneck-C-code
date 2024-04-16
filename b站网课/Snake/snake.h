#pragma once

#include <Windows.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

//蛇的方向
enum DIRECTION
{
	UP = 1,
	DOWN,
	LEFT,
	RIGHT
};

//蛇的状态
//正常、撞墙、撞到自己、正常退出
enum GAME_STATUS
{
	OK,
	KILL_BY_WALL,
	KILL_BY_SELF,
	END_NORMAL
};


typedef struct SnakeNode
{
	int x;
	int y;
	struct SnakeNode* next;
}SnakeNode,*pSnakeNode;


typedef struct Snake
{
	pSnakeNode _pSnake;//指向蛇头的指针
	pSnakeNode _pFood;//指向食物节点的指针
	enum DIRECTION _dir;//蛇的方向
	enum GAME_STATUS _status;//蛇的状态
	int _food_weight;//一个食物的分数
	int _score;//总成绩
	int _sleep_time;//休息时间，时间越短，速度越快
}Snake,*pSnake;


void GameStart(pSnake ps);

void WelcomeToGame();