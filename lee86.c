#include<stdio.h>

int main(void) {

int a,b,c,d,i,j,size;



printf("원하는 모래시계 모양의 크기를 정하세요.");
scanf("%d",&size);
for(i=1;i<size*2-1;i++){
printf("*");
}
printf("*\n");
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

a=size-1;
for(i=1;i<=size;i++){
for(j=1;j<=a;j++){
printf(" ");
}
a--;
if(i !=1){
for(j=1;j<=i;j++){
printf("*");
}
}
if(i!=size) {
for(j=2;j<=i-1;j++){
printf(" ");
}
}

if(i !=1){
printf("*");
}
if(i!=size){
printf("\n");
}
}
for(b=1;b<=size-2;b++){
printf("*");
}
}