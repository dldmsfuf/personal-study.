#include <stdio.h>

int main(void){

int i,j,size,space;

while(1){

printf("마름모의 크기를 입력하세요(종료-1):");
scanf("%d",&size);
if(size == -1){return 0;}

space = size-1;
for(i=1;i<=size;i++){
for(j=1;j<=space;j++){
printf(" ");
}
space--;
for(j=1;j<=i;j++){
printf("*");
}
for(j=2;j<=i-1;j++){
printf(" ");}
if(i != 1)
printf("*");
printf("\n");
}
space=1;
}
return 0;
}