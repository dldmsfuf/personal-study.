#include <stdio.h>

int main(void){

int a,b,c,d,i,j,size,space;

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
if(i !=1){
printf("*");
}
printf("\n");
}
for(b=size-1;b>=1;b--) {
for(d=b;d<size;d++) {
printf(" ");
}
for(c=b;c>=1;c--){
printf("*");
}
if(b>2) {
for(a=b-2;a>=1;a--) {
printf(" ");
}
}
if(b>1){
printf("*\n");
}
}
return 0;
}
}