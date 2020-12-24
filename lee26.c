#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){

int a,b,i,k=0;

srand((unsigned)time(NULL));
a=rand();
b=rand();

if(a>b) {
for(i=b;i<=a;i++) {

k=k+i;
}
printf("%d부터 %d까지의 수를 더한값=%d",b,a,k);
}

else {
for(i=a;i<=b;i++) {

k=k+i;
}
printf("%d부터 %d까지의 수를 더한값=%d",a,b,k);
}

}