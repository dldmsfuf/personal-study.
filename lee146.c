#include <stdio.h> 
#include <memory.h>
int main(void) {

int A[5];
int A1[5];
int a,b,c,d,i;
for(a=0;a<=4;a++) {
printf("정수를 입력하시오.");
scanf("%d", &A[a]);
}
for(i=0;i<=4;i++) {

for(c=0;c<=3;c++) {

if(A[c]>A[c+1]) {
b=A[c];
A[c]=A[c+1];
A[c+1]=b;
}
}
}
for(d=0;d<=4;d++) {
printf("%d",A[d]);
}
memcpy(A1,   A,   sizeof(A)); 
for(d=0;d<=4;d++) {
printf("\n%d",A1[d]);
}

}