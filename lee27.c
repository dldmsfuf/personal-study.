#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void) {

int r;

srand((unsigned)time(NULL));

r=rand()%((10-1)+1)+1;

printf("%d\n",r);

if(r>=7) {

printf("예, 7보다 큽거나 같습니다.");
}

else{
printf("아니요, 7보다 작습니다.");
}
}