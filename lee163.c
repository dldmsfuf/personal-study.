#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	FILE *fp;

	fp=fopen("E:\\ㅇㅇ\\dd.txt","wt");
	if(fp==NULL) {
		printf("실패 - 종료\n");
		return 1;
	}
	fprintf(fp, "Example.");

	fclose(fp);

	printf("완료\n");
	return 0;
}