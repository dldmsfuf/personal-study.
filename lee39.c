#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

int a=0,b=0,c=0,i;

for(i=1; i<=100; i++) {

a=a+i;

if(1==i%2) {

b=b+i;
}

else {

c=c+i;
}

}

printf("1부터 100까지의 수의 합:%d\n", a);
printf("홀수의 합:%d\n",b);
printf("짝수의 합:%d", c);

}