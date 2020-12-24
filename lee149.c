#include<stdio.h> 
int main(void) {
int B[5][1]={{'\0'},};
char A[10]={{'\0'},};
int a,b,c,d,e;

for(a=0;a<=4;a++) {
printf("그래프의 크기를 입력하시오.");
scanf("%d", &B[a][0]);
}
for(b=0;b<=4;b++) {
for(c=0;c<=B[b][0];c++) {
A[b][c]='*';
}
}
for(d=0;d<=4;d++) {
for(e=0;d<=9;e++) {
printf("%c",A[d][e]);
}
printf("\n");
}
}