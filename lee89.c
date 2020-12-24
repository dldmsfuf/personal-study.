#include <stdio.h>

int main(void) {

int a,b,c,size;

while(1) {

printf("원하는 직각삼각형의 크기를 입력하세요.(취소:-1)");
scanf("%d",&size);

if(size==-1){
return 0;
}

for(a=1;a<=size-1;a++) {

for(b=size;b>a;b--){
printf(" ");
}

printf("*");

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