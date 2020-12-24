#include <stdio.h>

int main(void) {

char A[50][50]={{'\0'},};
int a=0,b=0,c=0,d=0,e=0;

printf("원하는 역삼각형의 크기를 입력하세요");
scanf("%d",&a);

d=a;
e=0;

for(b=0;b<(a/2)+1;b++) {
for(c=e;c<d;c++) {
A[b][c]='*';
}
d=d-1;
e=e+1;
}

for(b=0;b<a;b++) {
for(c=0;c<a;c++) {
printf("%c",A[b][c]);
}
printf("\n");
}
}