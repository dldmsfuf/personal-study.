#include <stdio.h>  
#include <conio.h>  //#include <stdafx.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

void gotoxy(int x, int y)
{
	COORD Pos = {2*x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

void rotate(int a[4][4], int b[4][4])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			b[i][j]=a[j][3-i];
		}
	}
}

void gen_box(int a[4][4], int b[4][4], int *box_type, int *rot_type)
{
	*box_type=rand() % 10+1;
	if (*box_type==8) *box_type =1;
	else if (*box_type==9) *box_type=2;
	else if (*box_type==10) *box_type=3;

	*rot_type=rand() % 5;
	for (int i =0; i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			a[i][j]=0;
		}
	}
	
	switch (*box_type)
	{
	case 1:
	{
		a[0][1]=1;
		a[1][1]=1;
		a[2][1]=1;
		a[3][1]=1;
	} break;
	case 2& 7:
	{
		a[0][1] =1;
		a[1][1]=1;
		a[1][2]=1;
		a[2][1]=1;
	} break;
	case 3:
	{
		a[1][1]=1;
		a[1][2]=1;
		a[2][2]=1;
		a[2][1]=1;
	} break;
	case 4:
	{
		a[1][1]=1;
		a[1][2]=1;
		a[2][2]=1;
		a[3][2]=1;
	} break;
	case 5:
	{
		a[1][2]=1;
		a[1][1]=1;
		a[2][1]=1;
		a[3][1]=1;
	} break;
	case 6:
	{
		a[1][2]=1;
		a[1][3]=1;
		a[2][1]=1;
		a[2][2]=1;
	} break;
	case 7:
	{
		a[1][1]=1;
		a[1][2]=1;
		a[2][2]=1;
		a[2][3]=1;
	}
	
	}

	for (int i=0;i< *rot_type; i++)
	{
		rotate(a, b);
		for(int p=0;p<4;p++)
		{
			for(int q=0;q<4;q++)
			{
				a[p][q]= b[p][q];
			}
		}
	}
}

void show(int a[4][4], int boxx, int boxy)
{
	int i=0, j=0;
	for(i=0;i<4;i++)
	{
		gotoxy(boxx, boxy + i);
		for(j=0;j<4;j++)
		{
			switch (a[i][j])
			{
			case 0: printf(" "); break;
			case 1: printf("бс"); break;
			}
		}
	}
}

int main()
{
	srand((int)time(NULL));
	int i,j,check;
	int borderx[4] = {10,11,12,13};
	int bordery[4] = {20,20,20,20};

	int a[4][4];
	int b[4][4];

restart:
	int boxx=10, boxy=3;
	int box_type;
	int rot_type;
	
	int num=0;

	system("cls");
	gen_box(a,b,&box_type,&rot_type);
	show(a,boxx,boxy);
	while (1)
	{
		for (int t= 0; t<5;t++)
		{
			check=0;

			if(_kbhit())
			{
				system("cls");
				rotate(a, b);
				int k = _getch();
				check++;
				system("cls");
			}
			gotoxy(boxx,boxy);
			show(b,boxx,boxy);

			gotoxy(borderx[0],bordery[0]);
			printf("-------");

			Sleep(35);

			if(check)
			{
				for(i=0;i<4;i++)
				{
					for(j=0;j<4;j++)
					{
						a[i][j]=b[i][j];
					}
				}
			}
		}
		for(i=0;i<4;i++)
		{
			if(boxx==borderx[i] && boxy==bordery[i]-3)
			{
				gotoxy(10,20);
				printf("over");
				Sleep(2000);
				goto restart;
			}
		}
		system("cls");
		boxy++;
	}
	
}