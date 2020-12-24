#include <stdio.h>
int main(void) {

int m,n;
printf("수치를 입력");
scanf("%d",&m);

n=(m<0) ?m*-1:m;
printf("%d의 절대값은%d\n",m,n);
}