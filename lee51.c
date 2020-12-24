#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
int coin;
int player;

srand(time(NULL));
coin= rand()%2+1;

printf("앞,뒤 어느쪽? 앞=1 뒤=2를 입력>");
scanf("%d",&player);

if(coin==1) {
printf("동전은 앞면\n");
}

else {
printf("틀렸어요\n");
}

}