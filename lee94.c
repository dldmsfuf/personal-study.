#include <stdio.h>

int main(void) {

int a,b,c,d,size;

while(1) {

printf("\n원하는 마름모의 크기를 입력하세요.");
scanf("%d",&size);


for(a=1;a<size;a++) {
for(b=a;b<size;b++) {
printf(" ");
}
printf("*");
if(a==1){
printf("\n");
}
if(a!=1){
printf(" ");
}
if(a>2){
for(c=1;c<a*2-3;c++){
printf(" ");
}
}
if(a!=1){
printf("*\n");
}
}


for(a=1;a<=size;a++) {
if(a!=1) {
for(b=1;b<a;b++) {
printf(" ");
}
}
if(a!=size) {
printf("*");
for(c=a*2;c<size*2-1;c++){
printf(" ");
}
}
printf("*\n");
}
}
}