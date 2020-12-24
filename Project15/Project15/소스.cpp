#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp;

	fopen_s(&fp, "Test.txt", "w");
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			fprintf(fp, "%2d*%2d=%2d", i, j, i * j); 
		}
		fprintf(fp, "\n"); 
	} 
	fclose(fp);
	int i, j, result;
	fopen_s(&fp, "Test.txt", "r");
	for (int iCnt = 1; iCnt < 10; iCnt++) {
		for (int jCnt = 1; jCnt < 10; jCnt++) {
			fscanf_s(fp, "%2d*%2d=%2d", &i, &j, &result);
			printf("%2d*%2d=%2d ", i, j, result);
		} 
		printf("\n"); 
	} 
	fclose(fp);
}
