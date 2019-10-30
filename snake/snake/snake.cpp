// snake.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<Windows.h>
#define MAP_WIDTH 60
#define MAP_HEIGTH 20


typedef struct Postion
{
	int x;
	int y;

}
;
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
	Init();
	GameLoop();
	Score();
    return 0;
}

