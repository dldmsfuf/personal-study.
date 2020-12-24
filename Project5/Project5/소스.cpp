#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp1;
	FILE* fp2;
	int a, b, c, i;

	fp1 = fopen("C:\\lee\\bb.txt", "wt");
	if (fp1 == NULL) {
		printf("실패-종료\n");
		return 1;
	}
	fp2 = fopen("C:\\lee\\aa.txt", "rt");
	if (fp2 == NULL) {
		printf("실패-종료\n");
		return 1;
	}
	



	for (i = 0; i < 3; i++) {
		
		fscanf(fp2, "%d %d", &a, &b);
		


		fprintf(fp1, "%d+%d=%d\n", a, b, a + b);
		fprintf(fp1, "%d-%d=%d\n", a, b, a - b);
		fprintf(fp1, "%d/%d=%d\n", a, b, a / b);
		fprintf(fp1, "%d*%d=%d\n", a, b, a * b);


		printf("계속하시겠습니까? \n1. 예\n2.아니요\n");
		scanf_s("%d", &c);

		if (c == 2) {
			break;
		};


	};
	fclose(fp1);
	fclose(fp2);
	

}

/*fp = fopen("C:\\lee\\aa.txt", "wt");
if (fp == NULL) {
	printf("실패-종료\n");
	return 1;
	}

while(1) {

printf("사칙연산을 할 수를 입력하시오.\n");
scanf_s("%d %d", &a, &b);

printf("계속하시겠습니까? \n1. 예\n2.아니요\n");
scanf_s("%d", &c);

if (c == 2) {
	fclose(fp); break;
};*/
