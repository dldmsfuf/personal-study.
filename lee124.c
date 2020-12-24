#include <stdio.h>

int main(void) {
char A[50][50]={{'\0'},};
int aa,b,c,k=0,j=0;

printf("원하는 정삼각형의 크기를 입력하세요.");
scanf("%d",&aa);

k=aa/2;

j=k;


for(b=0;b<(aa/2)+1;b++) {

for(c=k;c<=j;c++) {

A[b][c]='*';

}
k=k-1;
j=j+1;
}

for(b=0;b<aa;b++) {
for(c=0;c<aa;c++) {
printf("%c",A[b][c]);
}
printf("\n");
}
}