#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {

int a,b,c,d,e,i;
char n[10];

srand((unsigned)time(NULL));

for(i=1;i<=3;i++){

printf("이름을 입력하세요.");
scanf("%s",&n);

printf("당신의 수학점수=%d\n",a=rand()%((100-1)+1)+1);
printf("당신의 국어점수=%d\n",b=rand()%((100-1)+1)+1);
printf("당신의 영어점수=%d\n",c=rand()%((100-1)+1)+1);

d=a+b+c;
e=d/3;

printf("총점:%d, 평균:%d\n",d,e);
}

}