#include <stdio.h>
int main(void) {

int i, b=0;

for(i=1; i<=100; i+=2) {
b=b+i;
}

printf("1부터 100까지 홀수만 더한값=%d",b);
}