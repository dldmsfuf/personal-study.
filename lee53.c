#include <stdio.h>

int main(void) {

int a,b,i;
int c;

while(1) {

printf("원하는 값을 입력하시오");
scanf("%d",&i);

for(b=1;b<=i;b++) {

for(a=1;a<=i;a++) {

printf("* ");

}

printf("\n");

}

//printf("%d",'n');

printf("작업을 계속하시겠습니까?(y/n)");
scanf("%d",&c);

if(c==110 || c==78 ) { exit(0);
 }
}




}