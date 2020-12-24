#include <stdio.h>

int main(void) {

char A[50][50]={{'\0'},};
int a,b,c,d,e,f,g,h,x,y,z;

printf("원하는 역삼각형의 크기를 입력하세요");
scanf("%d",&a);

e=a/2+1;
f=e;

for(b=e;b>0;b--) {

for(c=e;c<=e;c++){
A[b][c]='*';
}
for(d=f;d<=f;d++){
A[b][f]='*';
}
e=e-1;
f=f+1;
g=b;
}
for(h=2;h<a;h++) {
A[g][h]='*';
}
for(x=0;x<a+2;x++) {
for(y=0;y<a+2;y++) {
printf("%c",A[x][y]);
}
printf("\n");
}
}