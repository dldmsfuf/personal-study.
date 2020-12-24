#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void){

int r,i;


for(i=1;i<=100000;i++){


srand((unsigned)time(NULL));
r=rand();

printf("%d\n",r);}
}