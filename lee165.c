#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	FILE *fp;
	int num1, num2;
	printf("1.숫자 입력 :");
	scanf("%d",&num1);
	printf("2.숫자 입력 :");
	scanf("%d",&num2);

	fp=fopen("E:\\ㅇㅇ\\dd.txt","wt");
	if (fp==NULL) {
		printf("실패-종료");
		return 1;
	}
	fprintf(fp, "%d와 %d의 사칙연산 결과입니다.\n",num1, num2);
 	fprintf(fp, "%d+%d=%d \n ,\n",num1, num2, num1+num2);
	fprintf(fp, "%d-%d=%d \n ,\n",num1, num2, num1-num2);
	fprintf(fp, "%d*%d=%d \n ,\n",num1, num2, num1*num2);
	fprintf(fp, "%d/%d=%d \n ,\n",num1, num2, num1/num2);

	fclose(fp);

	printf("완료\n");
	return 0;
}