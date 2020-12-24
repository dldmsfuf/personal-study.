#include<stdio.h>

int main(void) {

int a,b,c,d,e,f=0,g=0;
char z[10];

while(1) {

printf("1.성적 처리\n2.게임\n3.별만들기\n4.종료\n원하는 작업의 번호를 입력하세요.");
scanf("%d",&a);

switch(a) {

case 1: while(1) {
printf("1.총점\n2.평균\n3.학점\n4.반총점,반평균\n5.상위 화면으로 가기\n6,종료\n");
scanf("%d",&b);

switch(b) {

case 1: printf("당신의 이름과 국,영,수 점수를 입력하세요.");
scanf("%s %d %d %d",&z,&c,&d,&e);
f=c+d+e;
printf("%s의 국,영,수 점수의 총합은%d이다\n",z,f);
break;

case 2:printf("당신의 이름과 국,영,수 점수를 입력하세요.");
scanf("%s %d %d %d",&z,&c,&d,&e);
f=c+d+e;
g=f/3;
printf("%s의 국,영,수 점수의 평균은%d이다\n",z,g);
break;

case 3: printf("당신의 이름과 국,영,수 점수를 입력하세요.");
scanf("%s %d %d %d",&z,&c,&d,&e);
f=c+d+e;
g=f/3;
if(g>=90) {
printf("%s의 국,영,수 점수의 학점은A이다\n",z);
}
else{ if(g>=80) {
printf("%s의 국,영,수 점수의 학점은B이다\n",z);
}
else { if(g>=70) {
printf("%s의 국,영,수 점수의 학점은C이다\n",z);
}
else { if(g>=60) {
printf("%s의 국,영,수 점수의 학점은D이다\n",z);
}
else {
printf("%s의 국,영,수 점수의 학점은f이다\n",z);
}
}
}
}
break;
case 4:printf("당신은 몇반입니까?");
scanf("%d",&f);
 printf("당신의 반 학생수를 입력하세요.");
scanf("%d",&b);
 for(c=1;c<=b;c++) {
 printf("당신의 반 학생들의 점수를 입력하세요.");
scanf("%d",&d);
a=a+d;
}
e=a/b;
printf("%d반의 평균:%d\n",f,e);
break;
case 5:break;
case 6: printf("프로그램을 종료합니다.\n");
exit(0);
break;
}
break;
}
break;
}
}
}