#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){

int r,i,k=0;

srand((unsigned)time(NULL));

r=rand()%((100-1)+1)+1;

for(i=r;i<=100;i++){

k=k+i;
}

printf("%d부터 %d까지의 수를 더한값=%d",r,100,k);

}