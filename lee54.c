#include <stdio.h>

int main(void) {

int a,b,c,i;
char d;

while(1) {

printf("원하는 값을 입력하시오");
scanf("%d",&c);

for(a=1;a<=c;a++) {

for(b=1;b<=a-1;b++) {

printf(" ");

}
for(i=c;i>=1;i--) {
printf("*");
}
printf("\n");
}

while (getchar() != '\n') {}


printf("계속하실건가요?(y/n)");
scanf("%c",&d);

if((d=='y') || (d=='Y')) { continue;} else {exit(0);}

}

}