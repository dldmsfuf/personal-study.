#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {

int a=0,b,c,d,e=0,f,g,h,i=0,j=0;

srand((unsigned)time(NULL));

while(1) {

printf("1:성적 구하기.\n2:숫자 맞추기 게임.\n3:탄생석 알아보기\n4:종료\n");
printf("원하는 작업의 번호를 입력하시오.");
scanf("%d",&a);

switch (a) {

case 1: printf("당신의 국어,수학,영어 성적을 입력하시오.(단, 숫자만입력하시오)");
scanf("%d %d %d",&f,&g,&h);

i=f+g+h;
j=i/3;

printf("당신의 국어 점수:%d, 수학 점수:%d, 영어 점수:%d, 총합:%d,평균:%d\n",f,g,h,i,j);
 break;

case 2: c=rand()%((9-1)+1)+1;
printf("숫자 맞추기 게임\n");
while (0)  {
printf("1~9까지의 수중 하나를 입력하시오.") ;
scanf("%d",&d);
if(d==c) {

printf("정답입니다.\n");
printf("실패 횟수:%d\n",e);
break;
}

else {

printf("틀렸습니다\n");
e=e+1;
}

}
 break;

case 3: printf("알아보고 싶은 달을 입력하시오.");
scanf("%d",&b);
switch (b) {

case 1: printf("1월 탄생석:가넷\n의미: 진실, 우정\n");
break;
case 2: printf("2월 탄생석:자수정\n의미: 성실, 평화\n");
break;
case 3: printf("3월 탄생석:아쿠아마린\n의미: 젊음, 행복\n");
break;
case 4: printf("4월 탄생석:다이아몬드\n의미: 불멸, 사랑\n");
break;
case 5: printf("5월 탄생석:에메랄드\n의미: 행복, 행운\n");
break;
case 6: printf("6월 탄생석:진주\n의미: 순결, 부귀\n");
break;
case 7: printf("7월 탄생석:루비\n의미: 사랑, 평화\n");
break;
case 8: printf("8월 탄생석:페리도트\n의미: 부부의 행복\n");
break;
case 9: printf("9월 탄생석:사파이어\n의미: 성실, 진실\n");
break;
case 10: printf("10월 탄생석:오팔\n의미: 희망, 순결\n");
break;
case 11: printf("11월 탄생석:토파즈\n의미: 건강, 희망\n");
break;
case 12: printf("12월 탄생석:터키석\n의미: 성공, 승리\n");
break; }
 break;

case 4: printf("종료합니다.");
 exit(0);
break;

default: printf("1부터 4의값만 입력 받습니다.\n");

}

}

}