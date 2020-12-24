#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {

int r,i;

srand((unsigned)time(NULL));

r=rand()%((5-1)+1)+1;

printf("1부터 5까지의 숫자 중 원하는 숫자를 입력하세요.");
scanf("%d",&i);

if(r==i) {
printf("정답입니다.");
}

else{
printf("틀렸습니다.");
}

}