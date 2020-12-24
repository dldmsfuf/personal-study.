#include <stdio.h>
int main(void) {

int a=0,b;

while(1) {

printf("임의의 수를 입력하시오.");
scanf("%d",&a);

b=a%2;

printf("%d...%d\n",a,b);

}
system ("pause");

}
