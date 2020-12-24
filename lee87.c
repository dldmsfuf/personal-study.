#include <stdio.h>

int main(void) {

int a,b,c,size;

printf("원하는 직사각형의 크기를 입력하세요.");
scanf("%d",&size);

for(c=1;c<=size;c++){
printf("*");
}
printf("\n");
for(a=1;a<=size-2;a++) {
printf("*");
for(b=1;b<=size-2;b++){
printf(" ");
}
printf("*\n");
}
for(c=1;c<=size;c++){
printf("*");
}
}