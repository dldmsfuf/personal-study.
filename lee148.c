#include<stdio.h> 
int main(void) {

int A[5];
int a,b,c,d,i;

for(a=0;a<=4;a++) {
printf("성적을 입력하시오.");
scanf("%d", &A[a]);
}

for(i=0;i<=4;i++) {

for(c=0;c<=3;c++) {

if(A[c]<A[c+1]) {
b=A[c];
A[c]=A[c+1];
A[c+1]=b;
}
}
}
for(d=1;d<=5;d++) {
printf("%d등의 점수:%d\n",d,A[d-1]);
}
}