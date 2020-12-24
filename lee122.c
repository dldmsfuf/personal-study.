#include <stdio.h>

int main(void) {
char A[50][50];
int a,i,k;

printf("원하는 정사각형의 크기를 입력하세요");
scanf("%d",&a);

for(i=0;i<a;i++) {
for(k=0;k<a;k++) {

A[i][k]='*';

}}


for(i=0;i<a;i++) {
for(k=0;k<a;k++) {

printf("%c",A[i][k]);
}

printf("\n");
}
}