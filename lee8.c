#include <stdio.h>
int main(void) {
int a;
int b;
int c;

printf("원하는 숫자를 입력하시오.\n");
scanf("%d",&a);

printf("원하는 숫자를 입력하시오.\n");
scanf("%d",&b);

printf("원하는 숫자를 입력하시오.\n");
scanf("%d",&c);

printf("%d+%d+%d=%d\n", a,b,c,a+b+c);
printf("%d-%d-%d=%d\n",a,b,c,a-b-c);
printf("%d/%d/%d=%d\n",a,b,c,a/b/c);
printf("%dx%dx%d=%d",a,b,c,a*b*c);
}