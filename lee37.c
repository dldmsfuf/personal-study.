#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

int a,b,r;

srand((unsigned)time(NULL));


while(1){
r=rand()%((10-1)+1)+1;

a=r%2;

printf("%d...%d\n",r,a);

system("pause");
}

}