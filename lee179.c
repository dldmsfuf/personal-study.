#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	char* arr[3];
	char tmp[30];
	int len, i;

	for (i = 0; i < 3; i++) {
		printf("[%d] :", i);
		scanf_s("%s", tmp, sizeof(tmp));
		len = strlen(tmp) + 1;
		printf("[%d]:tmp\t林家:%p\n", i, &tmp);
		arr[i] = (char*)malloc(sizeof(char) * len);
		printf("[%d] : arr[%d]\t林家: %p\n\n", i, i, &arr[i]);
		
		strcpy(arr[i], tmp);
	}
	printf("\n");
	for (i = 0; i < 3; i++) {
		printf("arr[%d]=%s\t林家 :%p\n", i, arr[i], &arr[i]);

	}
	for (i = 0; i < 3; i++)
	{
		free(arr[i]);
	}
	return 0;
}