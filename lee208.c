#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void A(int* p) {

	*p=*p * *p;
}

int main(void) {

	int num;

	printf("숫자 입력:");
	scanf("%d",&num);

	A(&num);
	printf("제곱:%d",num);
	return 0;

}