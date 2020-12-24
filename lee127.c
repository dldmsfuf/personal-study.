#include <stdio.h>

int main(void) {

char A[50][50]={{'\0'},};
int a,b,c,d,e,f,k,j,h,l,x,y;

printf("원하는 모래시계의 크기를 입력하세요.");
scanf("%d",&a);

k=a/2;
j=k;
e=1;
f=a-1;

for(l=0;l<(a/2)+1;l++) {

for(h=l;h<=f;h++) {
A[l][h]='*';
}
f=f-1;
e=e+1;
}
x=l-1;

for(b=x;b<=2*(a/2);b++) {

for(c=k;c<=j;c++) {

A[b][c]='*';
}

k=k-1; 
j=j+1;
}

for(x=0;x<a;x++) {
for(y=0;y<a;y++) {
printf("%c",A[x][y]);
}
printf("\n");
}
}