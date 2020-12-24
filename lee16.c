#include <stdio.h>
int main(void) {

int a,i,b=0;

printf("원하는 값을 입력하시오.");
scanf("%d",&a);

for(i=a; i<=100; i++) {
b=b+i;
}
printf("%d부터 100까지 더한값=%d",a,b);
}