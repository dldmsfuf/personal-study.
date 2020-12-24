#include <stdio.h>
int main(void) {

int i,b=0, c=0, d=0;

for(i=1; i<=100; i+=2) {
c=c+i;//홀수의 합
b=b+(i+1);
d=d+(i+(i+1));
}

printf("1부터 100까지의 짝수의 합=%d\n",b);
printf("1부터 100까지의 홀수의 합=%d\n",c);
printf("1부터 100까지의 합=%d",d);
}