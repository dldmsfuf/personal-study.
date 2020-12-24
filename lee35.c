#include <stdio.h>
int main(void) {

int a=0,b=0,c=0,f,g,i;
char d[10];

for(i=1;i<=2;i++) {

printf("이름을 입력하세요.");
scanf("%s",&d);
printf("수학 점수는?");
scanf("%d",&a);
printf("국어 점수는?");
scanf("%d",&b);
printf("영어 점수는?");
scanf("%d",&c);

f=a+b+c;
g=f/3;

printf("%s의 수학점수:%d, 국어 점수:%d, 영어 점수:%d, 총점:%d, 평균:%d\n",d,a,b,c,f,g);
}

}
