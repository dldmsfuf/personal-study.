#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){

int r,i,g,k=0;

srand((unsigned)time(NULL));

r=rand();
i=rand();

for(g=r;g<=i;g++){
k=k+g;

}
printf("%d부터 %d까지의 수의 합=%d",r,i,k);

}