#include <stdio.h>
int main(void) {

int i, a, b, c=0;

printf("원하는 수를 입력하세요.");
scanf("%d", &a);

printf("원하는 수를 입력하세요.");
scanf("%d",&b);

for(i=a; i<=b; i++){
c=c+i;
}
printf("%d부터 %d까지 더한 값=%d",a,b,c);
}