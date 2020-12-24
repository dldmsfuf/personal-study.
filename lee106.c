#include <stdio.h>

int a(int x,int y) {
return x+y;
}

void b(int num) {

printf("덧셈의 결과:%d",num);
}
int c(void){

int z;
scanf("%d",&z);
return z;
}

int main(void) {

int x,y,num;
printf("두 숫자를 입력하세요.");

x=c();
y=c();

num=a(x,y);

b(num);
}
