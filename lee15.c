#include <stdio.h>
int main(void) {

int a,i,b=0;

printf("원하는 값을 입력하시오.");
scanf("%d",&a);

for(i=1;i<=a; i++) {
b=b+i;
}
printf("1부터 %d까지 더한값=%d",a,b);
}
