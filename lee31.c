#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

int a=0,r,i;

srand((unsigned)time(NULL));


printf("임의의 수      ,합\n ");

for(i=1;i<=10;i++)  {

r=rand()%((100-1)+1)+1;

a=a+r;

printf("%d          , %d\n ",r,a);
}

}