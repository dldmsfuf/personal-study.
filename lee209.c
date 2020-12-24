#include <stdio.h>

void A(int* a,int* b,int c) {
	c=*a;
	*a=*b;
	*b=c;
}

int main(void) {
	int num1, num2, a=0;

	printf("숫자 1:\n숫자 2:\n");
	scanf("%d %d",&num1, &num2);

	A(&num1,&num2,a);
	printf("바꾼 후..\n숫자1: %d 숫자2: %d",num1,num2);
}