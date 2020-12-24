#include <stdio.h>
int main(void){

char a[10];
int b,c,d,e,f,i;

for(i=1;i<=3;i++){

printf("이름을 입력하세요.");
scanf("%s",&a);

printf("국어점수?");
scanf("%d",&b);
 
printf("수학점수?");
scanf("%d",&c);

printf("영어점수?");
scanf("%d",&d);

e=b+c+d;
f=e/3;

printf("%s의 국어 점수는%d 수학 점수는%d 영어 점수는%d입니다.\n",a,b,c,d);
printf("총점은 %d이고, 평균은 %d입니다.\n",e,f);
}

}
