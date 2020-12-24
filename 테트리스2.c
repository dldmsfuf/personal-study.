#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

void gotoxy(int x, int y)
{
	COORD Pos = { 2 * x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

//박스가 회전을 하는 함수
void rotate(int a[4][4], int b[4][4])
{
	int i, j;
	for (i = 0; i<4; i++)
	{
		for (j = 0; j<4; j++)
		{
			b[i][j] = a[j][3 - i];
		}
	}
}

//박스 생성 generating box
void gen_box(int a[4][4], int b[4][4], int *box_type, int *rot_type)
{
	*box_type = rand() % 10 + 1;//박스 종류는 1~7 그리고 확률 조정때문에 10까지
	if (*box_type == 8) *box_type = 1;
	else if (*box_type == 9 ) *box_type = 2;
	else if (*box_type == 10 ) *box_type = 3;

	*rot_type = rand() % 5;//그 박스가 랜덤적으로 회전되어 생성될 떄, 그 회전 횟수.
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i][j] = 0;//일단 다 초기화 후 이따 필요한 곳만 1로
		}
	}

	switch (*box_type)
	{
	case 1:
	{
		a[0][1] = 1;
		a[1][1] = 1;
		a[2][1] = 1;
		a[3][1] = 1;

	} break;
	case 2 & 7:
	{
		a[0][1] = 1;
		a[1][1] = 1;
		a[1][2] = 1;
		a[2][1] = 1;

	} break;
	case 3:
	{
		a[1][1] = 1;
		a[1][2] = 1;
		a[2][2] = 1;
		a[2][1] = 1;
	} break;
	case 4:
	{
		a[1][1] = 1;
		a[1][2] = 1;
		a[2][2] = 1;
		a[3][2] = 1;

	} break;
	case 5:
	{
		a[1][2] = 1;
		a[1][1] = 1;
		a[2][1] = 1;
		a[3][1] = 1;
	} break;
	case 6:
	{
		a[1][2] = 1;
		a[1][3] = 1;
		a[2][1] = 1;
		a[2][2] = 1;
	} break;
	case 7:
	{
		a[1][1] = 1;
		a[1][2] = 1;
		a[2][2] = 1;
		a[2][3] = 1;
	}

	}

	for (int i = 0; i < *rot_type; i++)
	{
		rotate(a, b);//a를 회전 시킨 게 b에 저장되니까 그걸 다시 a에 저장해야함
		for (int p = 0; p < 4; p++)
		{
			for (int q = 0; q < 4; q++)
			{
				a[p][q] = b[p][q];
			}
		}
	}
}



//박스를 보여주는 함수
void show(int a[4][4], int boxx, int boxy)
{
	int i = 0, j = 0;
	for (i = 0; i<4; i++)
	{
		gotoxy(boxx, boxy + i);
		for (j = 0; j<4; j++)
		{
			switch (a[i][j])
			{
			case 0: printf("  "); break;
			case 1: printf("■"); break;
			}
		}


	}
}




int main()
{
	srand((int)time(NULL));
	int i, j, check;
	//check은 키 입력이 있는지 봐주는 변수
	//키 입력할 경우 1이 되고, 다음 번 루프 때 다시 0이 됨.
	int borderx[4] = { 10,11,12,13 };
	int bordery[4] = { 20,20,20,20 };//박스가 갈 경계선.

	int a[4][4];
	int b[4][4];


restart://블록이 엔드라인까지 도착했을 경우
	int boxx = 10, boxy = 3;
	int box_type;
	int rot_type;

	int num=0;



	system("cls");
	gen_box(a, b, &box_type, &rot_type);
	show(a, boxx, boxy);
	while (1)
	{
		

		for (int t = 0; t < 5; t++)
			//y좌표가 한 번 늘어나기 전까지 회전을 5번 시킬 수 있음
		{
			check = 0;

			if (_kbhit())
			//키 입력이 있으면 회전을 한 번 하고 창을 지움. 입력 없으면 안 지워도 되고.
			{
				system("cls");
				rotate(a, b);
				int k = _getch();//버퍼에 입력된 키보드 값을 지워주기 위해 getch()이용
				check++;
				system("cls");

			}

			gotoxy(boxx, boxy);
			show(b, boxx, boxy);
			//배열 a를 회전시켜 배열 b에 저장 후 b배열을 출력

			gotoxy(borderx[0], bordery[0]);
			printf("--------");

			Sleep(35);


			//아까 키 입력이 있었다면 check=1,
			//그 경우 a에 다시 b를 대입해 주어야함.
			if (check)
			{
				for (i = 0; i<4; i++)
				{
					for (j = 0; j<4; j++)
					{
						a[i][j] = b[i][j];
					}
				}

			}
		}
		for (i = 0; i<4; i++)
		{
			if (boxx == borderx[i] && boxy == bordery[i] - 3)
				//show함수에서 boxy줄부터 printf이용후 밑으로 네줄 까지 내려오니까
				//bordery[i]-3정도로 설정
			{
				gotoxy(10, 20);
				printf("over");
				Sleep(2000);
				//아직 뭐 게임에 대한 설정은 대충하느라 그냥 Sleep함수로 때움
				goto restart;
			}
			

		}
		system("cls");
		boxy++;//루프문 한 번 돌 때마다 box의 y좌표 증가

		//회전이 완료된 배열은 b니까 다시 a 배열에 b 배열 대입
	}
	return 0;

}

