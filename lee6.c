#include <stdio.h>

int main(void) {

int a;
int b;

char c[10];

printf("이름을 입력하시오.");
scanf("%s", &c); 

printf("원하는 값을 입력하시오.");
scanf("%d", &a);

printf("원하는 값을 입력하시오.");
scanf("%d", &b);


printf("%s\n",&c);
printf("%d+%d=%d\n",a,b,a+b);
printf("%d-%d=%d\n",a,b,a-b);
printf("%d/%d=%d\n",a,b,a/b);

}