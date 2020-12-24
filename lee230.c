#include <stdio.h>
#include <time.h>
#include <string.h>
#pragma warning(disable : 4996)
 
 
#define check_in 1
#define check_out 2
#define change_room 3
#define query 4
#define exit 5
 
#define d_num 0
#define d_name 1
#define d_sex 2
#define d_birth 3
#define d_cell_num 4
#define d_inday 5
#define d_sickname 6
#define d_room 7
#define d_doctor 8
#define d_nurse 9
#define d_outday 10
 
 
FILE *rpfp;
FILE *rrfp;
FILE *rrhfp;
 
FILE *wpfp;
FILE *wrfp;
FILE *wrhfp;
time_t timer;
struct tm *t;
 
int i=0;
int pat_n = 0;
int room_n = 0;
int his_n = 0;
int flag=1;
 
char year[10];
char month[10];
char day[10];
 
char year2[6];
char *num2="0101";
 
struct Patient {
	int num;
	char name[10];
	char sex;
	char birth[20];
	char cell_num[20];
	char inday[10];
	char sickname[10];
	int room;
	int doctor;
	int nurse;
	char outday[10];
};

struct Room {
	int num;
	int size;
	char sex;
	int human_size;
	int currnt_human;
};
	
struct History{
	int num;
	char day[9];
	int before;
	int after;
};

struct Patient pat[100];
struct Room room[100];
struct History his[100];

void Init()
{
	rpfp=fopen("patient.txt","r");
	rrfp=fopen("room.txt","r");
	rrhfp=fopen("room_history.txt","r");

	timer=time(NULL);
	t=localtime(&timer);

	sprintf(year,"%d",t->tm_year+1900);
	sprintf(month,"%02d",t->tm_mon+1);
	sprintf(day,"%d",t->tm_mday);

	sprintf(year2,"%d",t->tm_year+1900);

	strcat(year2,num2);
	strcat(year,month);
	strcat(year,day);

	printf("안녕하세요 rs병원입니다,\n");
	printf("오늘은 %s입니다.\n",year);

	if(rpfp != NULL)
	{
		char strTemp[100];
		char *token = NULL;
		char *pStr;
		
		int token_n = 0;
		while (!feof(rpfp))
		{
			pStr = fgets(strTemp, sizeof(strTemp), rpfp);
			token = strtok(pStr, "|");
			while (token != NULL)
			{
			switch (token_n)
			{
			case d_num:
				pat[pat_n].num = atoi(token);
				break;
			case d_name:
				strcpy(pat[pat_n].name, token);
				break;
			case d_sex:
				pat[pat_n].sex = token[0];
				break;
			case d_birth:
				strcpy(pat[pat_n].birth,token);
				break;
			case d_cell_num:
				strcpy(pat[pat_n].cell_num,token);
				break;
			case d_inday:
				strcpy(pat[pat_n].inday,token);
				break;
			case d_sickname:
				strcpy(pat[pat_n].sickname,token);
				break;
			case d_room:
				pat[pat_n].room=atoi(token);
				break;
			case d_doctor:
				pat[pat_n].doctor=atoi(token);
				break;
			case d_nurse:
				pat[pat_n].nurse=atoi(token);
				break;
			case d_outday:
				strcpy(pat[pat_n].outday,token);
				break;
			default:
				break;
			}
			
			token=strtok(NULL,"l");
			token_n++;
		}
		pat_n++;
		token_n=0;
	}
	printf("총환자수: %d \n",pat_n);
	printf("마지막 환자 번호:%d \n",pat[pat_n-1].num);
	
	for(i=0;i<pat_n;i++) {
		printf("%d %s %c %s %s %s %s %d %d %d %s \n",pat[i].num, pat[i].name, pat[i].sex, pat[i].birth, pat[i].cell_num, pat[i].inday, pat[i].sickname, pat[i].room, pat[i].doctor, pat[i].nurse, pat[i].outday);
	}

	fclose(rpfp);
}
else
{
	printf("파일열기 오류 \n");
}
if(rrfp != NULL) {
	char strTemp[100];
	char *token = NULL;
	char *pStr;
	
	int token_n = 0;
	while (!feof(rrfp)) {
		pStr = fgets(strTemp, sizeof(strTemp),rrfp);
		token = strtok(pStr, "|");
		while (token != NULL)
		{
			switch (token_n)
			{
			case 0:
				room[room_n].num=atoi(token);
				break;
			case 1:
				room[room_n].num=atoi(token);
				break;
			case 2:
				room[room_n].sex=token[0];
				break;
			case 3:
				room[room_n].human_size=atoi(token);
				break;
			case 4:
				room[room_n].currnt_human=atoi(token);
				break;
			default:
				break;
			}
			token=strtok(NULL,"l");
			token_n++;
		}

		room_n++;
		token_n=0;
	}
	
	for(i=0;i<room_n;i++)
	{
		printf("%d %d %c %d %d\n", room[i].num, room[i].size, room[i].sex, room[i].human_size, room[i].currnt_human);
	}

	fclose(rrfp);

}
else
{
	printf("파일열기 오류 \n");
}
if(rrhfp != NULL) {
	char strTemp[100];
	char *token=NULL;
	char *pStr;

	int token_n = 0;
	while (!feof(rrhfp))
	{
		pStr=fgets(strTemp, sizeof(strTemp),rrhfp);
		token=strtok(pStr,"|");
		while (token != NULL)
		{
			switch (token_n)		
			{
			case 0:
				his[his_n].num=atoi(token);
				break;
			case 1:
				strcpy(his[his_n].day,token);
				break;
			case 2:
				his[his_n].before=atoi(token);
				break;
			case 3:
				his[his_n].after=atoi(token);
				break;
			default:
				break;
			}
			
			token=strtok(NULL,"|");
			token_n++;
		}

		his_n++;
		token_n=0;
	}
	for(i=0;i<his_n;i++) {
		printf("%d %s %d %d \n",his[i].num,his[i].day,his[i].after);
	}
	
	fclose(rrhfp);

	
}
else
{
	printf("파일열기 오류 \n");
}
}

int getmenu(void) {
	int r;
	printf("1 입원, 2 퇴원, 3 병실이동, 4 자료조회, 5 종료 \n");
	scanf("%d", &r);
	return r;
}
int main() 
{
	int n=0;
	int r_patnum=0;
	int r_room = 0;
	int r_num=0;
	int rr_room=0;
	int who=0;
	int yn=0;
	char r_patoutday[9];

	Init();
	while (flag==1) {
		int menu=getmenu();
		switch(menu)
		{
		case check_in:
			pat[pat_n].num=(pat[pat_n-1].num+1);
			printf("환자번호: %d\n",pat[pat_n-1].num+1);
			printf("환자 이름:");
			scanf("%s",&pat[pat_n].name);
			
			printf("환자 성별:");
			scanf("%s",&pat[pat_n].sex);

			printf("환자 생년월일:");
			scanf("%s",&pat[pat_n].birth);
	
			printf("환자 휴대폰번호:");
			scanf("%s",&pat[pat_n].cell_num);


			pat[pat_n].inday[1] = year[1];
			pat[pat_n].inday[2] = year[2];
			pat[pat_n].inday[3] = year[3];
			pat[pat_n].inday[4] = year[4];
			pat[pat_n].inday[5] = year[5];
			pat[pat_n].inday[6] = year[6];
			pat[pat_n].inday[7] = year[7];
			printf("입원일은 %s 입니다.\n",pat[pat_n].inday);
			
 
         printf("환자 병명:");
         scanf("%s",&pat[pat_n].sickname);
 
 
         //      int i = 0;
         for (i = 0; i < room_n; i++)
         {
            if (room[i].sex == pat[pat_n].sex)
            {
               if (room[i].human_size > room[i].currnt_human)
               {
                  pat[pat_n].room = room[i].num;
                  room[i].currnt_human++;
                  break;
               }
               else
               {
                  printf("현재 수용가능한 병실이 없습니다.\n");
               }
            }
         }
 
         printf("환자병실은 %d 입니다.\n",pat[pat_n].room);
         //printf("현재 %d명.\n",room[i].currnt_human);
 
         printf("현재년도 : %d\n",(t->tm_year + 1900));
         pat[pat_n].doctor = (((t->tm_year + 1900)*100000)+(2*n+1));//t->tm_year + 1900 현재년도
         printf("담당의사는 %d 입니다.\n",pat[pat_n].doctor);
         pat[pat_n].nurse =  (((t->tm_year + 1900)*100000)+2*n);
         printf("담당간호사는 %d입니다.\n",pat[pat_n].nurse);
 
         pat[pat_n].outday[0]=year2[0];
         pat[pat_n].outday[1]=year2[1];
         pat[pat_n].outday[2]=year2[2];
         pat[pat_n].outday[3]=year2[3];
         pat[pat_n].outday[4]=year2[4];
         pat[pat_n].outday[5]=year2[5];
         pat[pat_n].outday[6]=year2[6];
         pat[pat_n].outday[7]=year2[7];
 
         printf("퇴원일은 %s입니다.\n",pat[pat_n].outday);      
         pat_n++;
         n++;
         break;
	case change_room:
          
 
			for (i = 0; i < room_n; i++)
			{
				printf("%d %d %c %d %d\n", room[i].num, room[i].size, room[i].sex, room[i].human_size, room[i].currnt_human);
			}


		printf("환자 번호:");
		scanf("%d",&r_patnum);
 
 		printf("바꾸고싶은방:");
		scanf("%d",&r_room);
 
			for(i=0;i<room_n; i++)
			{
				if(room[i].num==r_room)
				{
					yn=i;
				}
			}
            
		if(room[yn].human_size <=room[yn].currnt_human)
		{
                	printf("수용안됨\n");
		}
 
 
		if(room[yn].human_size > room[yn].currnt_human)
		{
 
			for(i=0; i<pat_n; i++)
			{
				if(r_patnum == pat[i].num)
				{
					rr_room=pat[i].room;
					pat[i].room=r_room;
					r_num=pat[i].num;
					break;
				}
			}
			for(i=0; i<room_n; i++)
			{
				if(r_room == room[i].num)
				{
					room[i].currnt_human++;
					break;
				}
			}
 
			for(i=0; i<room_n; i++)
			{
				if(rr_room == room[i].num)
				{
					room[i].currnt_human--;
					break;
				}
			}
 
			his[his_n].num = r_num;
            
			his[his_n].day[0] = year[0];
			his[his_n].day[1] = year[1];
			his[his_n].day[2] = year[2];
			his[his_n].day[3] = year[3];
			his[his_n].day[4] = year[4];
			his[his_n].day[5] = year[5];
			his[his_n].day[6] = year[6];
			his[his_n].day[7] = year[7];
 
			his[his_n].before = rr_room;
 
			his[his_n].after = r_room;
 
			printf("%d %s %d %d \n ",his[his_n].num,his[his_n].day,his[his_n].before,his[his_n].after);
			his_n++;
            
			}
		break;
	case query:
         for (i = 0; i < pat_n; i++)
      {
         printf("%d %s %c %s %s %s %s %d %d %d %s \n", pat[i].num, pat[i].name, pat[i].sex, pat[i].birth, pat[i].cell_num, pat[i].inday, pat[i].sickname, pat[i].room, pat[i].doctor, pat[i].nurse, pat[i].outday);
      }
         for (i = 0; i < room_n; i++)
      {
         printf("%d %d %c %d %d\n", room[i].num, room[i].size, room[i].sex, room[i].human_size, room[i].currnt_human);
      }
         for (i = 0; i < his_n; i++)
      {
         printf("%d %s %d %d \n",  his[i].num, his[i].day, his[i].before, his[i].after);
      }
         break;
      case exit:
         flag=0;
         break;
      }
 
   }
   wpfp = fopen("patient.txt", "w");
   wrfp = fopen("room.txt", "w");
   wrhfp = fopen("room_history.txt", "w");
   for (i=0; i<pat_n; i++)
   {
      fprintf(rpfp,"|%d|%s|%c|%s|%s|%s|%s|%d|%d|%d|%s|\n", pat[i].num, pat[i].name, pat[i].sex, pat[i].birth, pat[i].cell_num, pat[i].inday, pat[i].sickname, pat[i].room, pat[i].doctor, pat[i].nurse, pat[i].outday);
   }
   for (i=0; i<room_n; i++)
   {
      fprintf(rrfp,"|%d|%d|%c|%d|%d|\n", room[i].num, room[i].size, room[i].sex, room[i].human_size, room[i].currnt_human);
   }
   for (i=0; i<his_n; i++)
   {
      fprintf(rrhfp,"|%d|%s|%d|%d|\n",  his[i].num, his[i].day, his[i].before, his[i].after);
   }
 
   fclose(wpfp);
   fclose(wrfp);
   fclose(wrhfp);
}










