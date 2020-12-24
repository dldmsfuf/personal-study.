#include <stdio.h>

int main(void) {

char A[50][50]={{'\0'},};
int a,b,c,d,e,f,g,h,x,y,z;

printf("원하는 정사각형의 크기를 입력하세요.");
scanf("%d",&a);

for(b=0;b<a;b++) {
for(c=0;c<a;c++) {

A[b][c]='*';
}
}
for(b=1;b<a-1;b++) {
for(c=1;c<a/2;c++) {
A[b][c]=' ';
}
}
for(x=0;x<a+2;x++) {
for(y=0;y<a+2;y++) {
printf("%2c",A[x][y]);
}
printf("\n");
}
}