#include <stdio.h>

void f(int a) { 

int b=0,c=1,d=0,i;

printf("0");

for(i=2;i<=a;i++) {

d=b+c;
b=c;
c=d;

printf(", %d",d);
}

return a+b;
}

int main(void) {

int a;

printf("몇번째 피보나치수열을 원합니까?");
scanf("%d",&a);

f(a);
}