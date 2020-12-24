#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	FILE *fp;
	int num;
	printf("숫자 입력:");
	scanf("%d", &num);

	fp=fopen("E:\\ㅇㅇ\\dd.txt","wt");
	if (fp==NULL) {
		printf("실패-종료\n");
		return 1;
	}
	fprintf(fp,"예제파일입니다.\n");
	fprintf(fp,"프로그램에서 입력된 숫자는 %d입니다!",num);

	fclose(fp);

	printf("완료\n");
	return 0;
}
