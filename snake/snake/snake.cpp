// snake.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<Windows.h>
#define MAP_WIDTH 60
#define MAP_HEIGTH 20


typedef struct Position
{
	int x;
	int y;

}Position;

void DrawChar(int x, int y, char ch)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	putchar(ch);
}
void Init()
{
	for (int i=0;i<= MAP_HEIGTH;i++)
	{
		for (int j = 0; j <= MAP_WIDTH; j++)
		{
			if (j == MAP_WIDTH)
			{
				printf("|\n");
			}
			else if (i == MAP_HEIGTH)
			{
				printf("-");
			}
			else
			{
				printf(" ");
			}
		}
}


}

void GameLoop()
{
	while (1)
	{
		Sleep(100);
}
}

void Score()
{

}


int main(int argc, char* argv[])
{
	DrawChar(3, 4,6);
	Init();
	GameLoop();
	Score();
    return 0;
}

