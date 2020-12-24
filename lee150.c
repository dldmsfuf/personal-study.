#include <stdio.h>

int main(void) {

int A[100][100]={{'\0'},};
int a,b,c,d,e,x,y;

printf("원하는 마방진의 크기를 입력하세요");
scanf("%d",&a);

c=0;
d=a/2;

A[c][d]=1;

for(b=2;b<=a*a;b++) {
c=c-1;
d=d+1;

   if (c==-1 && d==a){
   c=1;
   d=a-1;
   A[c][d]=b;
   continue; // 루프 안에 남은줄들 스킵
   }


if(c==-1) {
c=a-1;
}
if(d==a) {
d=0;
}
if(A[c][d]!=0) {
c=c+2;
d=d-1;
if(c==a) {
c=0;
}
if(d==-1) {
d=a-1;
}
}
A[c][d]=b;
}

for(x=0;x<a;x++) {
for(y=0;y<a;y++) {
printf("%3d",A[x][y]);
}
printf("\n");
}

}