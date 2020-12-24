#include <stdio.h>

int main(void) {
int A[50][50];
int a,b,c;

printf("원하는 직각삼각형의 크기를 입력하세요.");
scanf("%d",&a);

for(b=0;b<a;b++) {
for(c=0;c<=b;c++) {
A[b][c]='*';


}

}
for(b=0;b<a;b++) {
for(c=0;c<a;c++) {
printf("%c",A[b][c]);
}
printf("\n");
}
}