#pragma once

#include <Windows.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define KEY_PRESS(vk) ((GetAsyncKeyState(vk) & 1) ? 1 : 0)


#define POS_X 24
#define POS_Y 5

#define WALL L'��'
#define BODY L'��'
#define FOOD L'��'

//�ߵķ���
enum DIRECTION
{
	UP = 1,
	DOWN,
	LEFT,
	RIGHT
};

//�ߵ�״̬
//������ײǽ��ײ���Լ��������˳�
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
	pSnakeNode _pSnake;//ָ����ͷ��ָ��
	pSnakeNode _pFood;//ָ��ʳ��ڵ��ָ��
	enum DIRECTION _dir;//�ߵķ���
	enum GAME_STATUS _status;//�ߵ�״̬
	int _food_weight;//һ��ʳ��ķ���
	int _score;//�ܳɼ�
	int _sleep_time;//��Ϣʱ�䣬ʱ��Խ�̣��ٶ�Խ��
}Snake,*pSnake;


void GameStart(pSnake ps);

void WelcomeToGame();

void InitSnake(pSnake ps);

void CreateFood(pSnake ps);

void GameRun(pSnake ps);

void SnakeMove(pSnake ps);

int NextIsFood(pSnakeNode pn, pSnake ps);

void EatFood(pSnakeNode pn, pSnake ps);

void NoFood(pSnakeNode pn, pSnake ps);

void KillByWall(pSnake ps);

void KillBySelf(pSnake ps);

void GameEnd(pSnake ps);

void SetPos(short x, short y);
