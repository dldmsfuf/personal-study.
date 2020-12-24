#include <stdio.h>

int main(void) {

int a,b,c;

while(1) {

printf("\n원하는 가로, 세로의 값을 입력하시오.");
scanf("%d %d",&a,&b);

c=a*b;

printf("사각형의 면적:%d",c);
}
}