#include <stdio.h>

int main(void) {

int a;
int b;

printf("원하는 값을 입력하시오.");
scanf("%d", &a);

printf("원하는 값을 입력하시오.");
scanf("%d", &b);

printf("%d+%d=%d\n",a,b,a+b);
printf("%d-%d=%d\n",a,b,a-b);
printf("%d/%d=%d\n",a,b,a/b);
printf("%dx%d=%d",a,b,a*b);
}