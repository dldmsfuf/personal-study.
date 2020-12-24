#include <stdio.h>

int main(void) {

	int num;
	int *numP=&num;

	printf("숫자 입력:");
	scanf("%d",&num);

	printf("num:%d\n*num:%d\n\n&numP:%d\nnumP:%d",num,*numP,numP,numP);
}