#include<stdio.h>
int main(void) {

int a,b=1,c=0, d=1,u=0,u1=0, u2=0;

while(1) {
printf("\n 포털 프로그램 \n");
printf("1.1~100까지의 합.\n");
printf("2.1~100까지의 짝수의 합.\n");
printf("3.1~100까지의 홀수의 합.\n");
printf("4.프로그램 종료.\n");
printf("원하는 작업의 번호를 입력하시오.");
scanf("%d",&a);

switch(a) {

case 1: while(b<=100) {
  u=u+b;b=b+1;
  }
 printf("1~100까지의 합:%d\n",u);
 break;

case 2: while(c<=100) {
  u1=u1+c;c=c+2;
  }
 printf("1~100까지의 짝수의 합:%d\n",u1);
 break;

case 3: while(d<=100) {
  u2=u2+d;d=d+2; 
  }
 printf("1~100까지의 홀수의 합:%d\n",u2);
 break;

case 4: printf("프로그램을 종료합니다.\n"); exit(0);
 break;

default: printf("1~4까지의 값만 입력받습니다.\n");
 break;
}

}
}