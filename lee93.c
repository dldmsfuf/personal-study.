#include <stdio.h>

int main(void) {

int a,b,c,d,size;

while(1) {

printf("\n원하는 정삼각형의 크기를 입력하세요.");
scanf("%d",&size);

for(a=1;a<=size;a++) {
printf("*");
}
printf("\n");
for(a=1;a<=size/2;a++){
for(b=1;b<=a;b++) {
printf(" ");
}
printf("*");
if(1<=a<size/2) {
for(c=a*2+3;c<=size;c++) {
printf(" ");
}
}
if(a<size/2){
printf("*\n");
}
}
}
}