#include <stdio.h>
int main(void) {

int a;
int b;
int c;
int f;
int g;
char n[10];

printf("당신의 이름을 입력하시오.");
scanf("%s", &n);
printf("국어 성적은?");
scanf("%d",&a);
printf("수학 성적은?");
scanf("%d",&b);
printf("영어 성적은?");
scanf("%d",&c);

f=a+b+c;
g=f/3;

printf("당신의 총점은 %d\n",f);
printf("당신의 평균은 %d",g);
}