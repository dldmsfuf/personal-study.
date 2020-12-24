#include <stdio.h>
#include <time.h>
#include <windows.h>

// 맵 크기 
#define MAX_X 39
#define MAX_Y 39

int posX = 1, posY = 1; // 시작 위치 

enum Color
{
	BLUE = 9, RED = 12, WHITE = 15
};

int map[MAX_Y][MAX_Y];

void SetTextColor(Color); // 텍스트 색상 설정 
void initMap(); // 맵 초기화 
void SetLoad(); // 길 생성 
void Draw_Maze(); // 미로 출력 

int main()
{
	initMap(); 
	SetLoad();
	Draw_Maze();
	
	return 0;
}

void SetTextColor(Color color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void initMap()
{
	int i, j;
	
	for(i=0; i<MAX_Y; i++)
	{
		for(j=0; j<MAX_X; j++)
		{
			if(i == 0 || j == 0 || i == MAX_Y-1 || j == MAX_X-1) // 테두리 설정 
				map[i][j] = 1; // 1 = 벽 
			else
				map[i][j] = 0; // 0 = 공백 
		}
	}
	map[1][1] = 2; // 2 == 길 // 시작점 설정 
}

void SetLoad()
{
	srand((unsigned)time(NULL));
	int i, Dir;
	
	for(i=0; i<10000; i++)
	{
		Dir = rand()%4; // 0 = 위, 1 = 오른쪽, 2 = 아래, 3 = 왼쪽 
		
		switch(Dir)
		{
			case 0 :
				if(posY == 1) continue; // 위쪽으로 갈 길이 없다면  
				
				if(map[posY-2][posX] == 0) // 2칸 이동한 칸이 공백이라면 
				{
					posY--; map[posY][posX] = 2;
					posY--; map[posY][posX] = 2;
				}
				else if(map[posY-2][posX] == 2) // 2칸 이동한 칸에 길이 있다면 
					posY-=2;
				break; 
				
			case 1 :
				if(posX == MAX_X-2) continue;
				
				if(map[posY][posX+2] == 0)
				{
					posX++; map[posY][posX] = 2;
					posX++; map[posY][posX] = 2;
				}
				else if(map[posY][posX+2] == 2)
					posX+=2;
				break; 
				
			case 2 :
				if(posY == MAX_Y-2) continue;
				
				if(map[posY+2][posX] == 0)
				{
					posY++; map[posY][posX] = 2;
					posY++; map[posY][posX] = 2;
				}
				else if(map[posY+2][posX] == 2)
					posY+=2;
				break; 	
				
			case 3 :
				if(posX == 1) continue;
				
				if(map[posY][posX-2] == 0)
				{
					posX--; map[posY][posX] = 2;
					posX--; map[posY][posX] = 2;
				}
				else if(map[posY][posX-2] == 2)
					posX-=2;
				break; 	
		}
	}
}

void Draw_Maze()
	{
		int i, j;
		
		for(i=0; i<MAX_Y; i++)
		{
			for(j=0; j<MAX_X; j++)
			{
				if(map[i][j] == 0 || map[i][j] == 1)
					printf("■");
				else if(i == 1 && j == 1) // 시작점 
				{
					SetTextColor(RED);
					printf("★");
					SetTextColor(WHITE); 
				}
				else if(i == MAX_Y-2 && j == MAX_X-2) // 도착점 
				{
					SetTextColor(BLUE);
					printf("★");
					SetTextColor(WHITE); 
				}
				else
					printf("  ");	
			}
			printf("\n");
		}
	}