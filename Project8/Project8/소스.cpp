#include<stdio.h>

int main(void) {

	int n = 0, rn = 0, mul = 0, c = 0;

	printf("원하는 단을 입력하세요.");
	scanf("%d", &n);


	rn = (n < 0) ? n * -1 : n;   // 1번



	//(rn%2) == 0  ? printf(" \n%d은 짝수단\n", rn)  : printf(" \n%d은 홀수단\n", rn) ; //2번
	(rn % 1) != 0 ? printf(" \n%d은 홀수단\n", rn) : printf(" \n%d은 짝수단\n", rn); //3번


	while (c < 9) {

		c++;              //c=c+1; 1, 2     

		mul = rn * c;


		printf("%d  *  %d  = %d\n", rn, c, mul);  