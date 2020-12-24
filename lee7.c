#include <stdio.h>
int main(void) {
char n[10];
int k;
int e;
int m;
int t;
int a;

printf("당신의 이름을 입력하시오.");
scanf("%s",&n);
printf("국어 점수를 입력하시오.");
scanf("%d",&k);

printf("영어 점수를 입력하시오.");
scanf("%d",&e);
 
printf("수학 점수를 입력하시오.");
scanf("%d",&m);


t=k+e+m;

a=t/3;

printf("총점  : %d\n",t);

printf("평균:%d",a);
}