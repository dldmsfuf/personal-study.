#include <stdio.h>

int main(void) {

int a,b,c,size;

while(1) {

printf("\n원하는 직각삼각형의 크기를 입력하세요.(종료:-1)");
scanf("%d",&size);

if(size==-1){
return 0;
}

for(a=1;a<=size-1;a++) {
printf("*");
if(size<3){
if(a==3){
printf(" ");
}
}
if(size>3){
if(a>=3){
for(b=3;b<=a;b++){
printf(" ");
}
}
}
if(a!=1){
printf("*");
}
printf("\n");
}
for(c=1;c<=size;c++){
printf("*");
}
}
}