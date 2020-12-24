#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NLEN 20
#define MAX_SUBJECT 3
typedef struct {
	char name[MAX_NLEN+1];
	int num;
	int scores[MAX_SUBJECT];
}Student;

const char*stitles[MAX_SUBJECT]={"국어","영어","수학"};

Student *stues;
int max_student;

void Initialize();
void Run();
int main(void)
{
	Initialize();
	Run();
	free(stues);
	return 0;
}

void Initialize()
{
	int i=0;
	int s=0;

	printf("최대 학생 수:");
	scanf("%d",&max_student);

	stues=(Student *)malloc(sizeof(Student)*max_student);
	memset(stues,0,sizeof(Student)*max_student);

	for(i=0;i<max_student;i++)
	{
		for(s=0;s<MAX_SUBJECT;s++)
		{
			stues[i].scores[s] = -1;
		}
	}
}

int SelectMenu();
void AddStudent();
void RemoveStudent();
void FindStudent();
void ListStudent();
void Run()
{
	int key = 0;
	while((key = SelectMenu())!=0)
	{
		switch(key)
		{
		case 1: AddStudent(); break;
		case 2: RemoveStudent(); break;
		case 3: FindStudent(); break;
		case 4: ListStudent(); break;
		default: printf("잘못선택하였습니다.\n"); break;
		}
	}
	printf("프로그램 종료\n");
}
int SelectMenu()
{
	int key=0;
	printf("성적 관리 프로그램\n 0:종료\n");
	printf("1:학생 데이터 입력\n 2: 학생 데이터 삭제\n 3: 학생검색 \n4: 목록보기\n");
	scanf("%d",&key);
	return key;
}

int lsAvailNum(int num);
int lsAvailScore(int score);
void AddStudent()
{
	int num=0;
	Student *stu=0;
	int s=0;
	
	printf("추가할 학생 번호(1~%d):",max_student);
	scanf("%d",&num);

	if(lsAvailNum(num)==0)
	{
		printf("범위를 벗어난 학생 번호입니다.\n");
		return;
	}

	if(stues[num-1].num)
	{
		printf("이미 추가하였습니다\n");
		return;
	}

	stu = stues+(num-1);
	stu->num=num;
	printf("이름:");
	scanf("%s",stu->name,sizeof(stu->name));

	for(s=0;s<MAX_SUBJECT;s++)
	{
		printf("%s 성적:",stitles[s]);
		scanf("%d",stu->scores+s);

		if(lsAvailScore(stu->scores[s])==0)
		{
			stu->scores[s]=-1;
			printf("입력한 성적이 유효하지 않아서 %s성적은 입력 처리하지 않았습니다.\n",stitles[s]);
		}
	}
}
int lsAvailNum(int num)
{
	return (num>=1)&&(num<=max_student);
}
int lsAvailScore(int score)
{
	return(score>=0)&&(score<=100);
}
void RemoveStudent()
{
	int num=0;
	Student*stu=0;
	int s=0;

	printf("삭제할 학생 번호(1~%d):",max_student);
	scanf("%d",&num);

	if(lsAvailNum(num)==0)
	{
		printf("범위를 벗어난 학생 번호입니다.\n");
		return;
	}
	if(stues[num-1].num==0)
	{
		printf("데이터가 없습니다.\n");
		return;
	}

	stu = stues + (num-1);
	strcpy_s(stu->name,sizeof(stu->name),"");
	stu->num=0;
	for(s=0;s<MAX_SUBJECT;s++)
	{
		stu->scores[s]=-1;
	}

	printf("삭제하였습니다.\n");
}
void ViewStuData(Student *stu);
void FindStudent()
{
	int num=0;
	Student *stu=0;
	int s=0;

	printf("검색할 학생 번호(1~%d):",max_student);
	scanf("%d",&num);

	if(lsAvailNum(num)==0)
	{
		printf("범위를 벗어난 학생 번호입니다.\n");
		return;
	}
	
	if(stues[num-1].num==0)
	{
		printf("데이터가 없습니다.\n");
		return;
	}

	stu = stues + (num-1);
	ViewStuData(stu);
}
void ViewStuData(Student *stu)
{
	int i=0;
	int s=0;

	printf("%4d %10s",stu->num,stu->name);
	for(s=0;s<MAX_SUBJECT;s++)
	{
		printf("%4d",stu->scores[s]);
	}
	printf("\n");
}
void ListStudent()
{
	int i=0;
	int s=0;

	printf("%4s %10s","번호","이름");
	for(s=0;s<MAX_SUBJECT;s++)
	{
		printf("%4s",stitles[s]);
	}
	printf("성적이 -1인 곳은 미입력\n");
	
	for(i=0;i<max_student;i++)
	{
		if(stues[i].num)
		{
			ViewStuData(stues+i);
		}
	}
}