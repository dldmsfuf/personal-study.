#include <stdio.h>

int main(void) {

int a,b,c,d,size;

while(1) {

printf("\n원하는 정삼각형의 크기를 입력하세요.");
scanf("%d",&size);

for(a=1;a<=size*2-1;a++) {
printf("*");
}
printf("\n");
for(a=1;a<=size-1;a++){
for(b=1;b<=a;b++) {
printf(" ");
}
printf("*");
if(a==1) {
for(a=1;a<=size*2-5;a++) {
printf(" ");
}
}
if(a>1){
for(c=a*2-3;c<size-1;c++) {
printf(" ");
}
}
if(a<size){
printf("*\n");
}
}
}
}