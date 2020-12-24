#include <stdio.h>

int main(void){

int a,b,c,size;

while(1) {

printf("\n원하는 직각삼각형의 크기를 입력하세요.");
scanf("%d",&size);

for(a=1;a<=size;a++){
printf("*");
}
printf("\n");

for(a=1;a<size;a++) {
printf("*");
if(a<size-2) {
for(b=a;b<=size-3;b++) {
printf(" ");
}
}
if(a!=size-1) {
printf("*\n");
}
}
}
}