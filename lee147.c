#include<stdio.h> 
int main(void) {

int A[5];
int max=0;
int min=0;
int a,b,c;

for(a=0;a<=4;a++) {
printf("정수를 입력하시오.");
scanf("%d", &A[a]);
}
max=A[0];
for(b=1;b<=4;b++) {
if(max<A[b]) {
max=A[b];
}
}

min=A[0];
for(b=1;b<=4;b++) {
if(min>A[b]) {
min=A[b];
}
}
printf("최댓값:%d\n최솟값:%d",max,min);
}