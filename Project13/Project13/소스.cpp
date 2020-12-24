#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	FILE* fp;
	char buff[256];

	fopen_s(&fp, "new file.txt", "w");
	printf("아래에 내용을 입력하세요 (끝내려면 빈줄을 입력하세요.) \n");
	gets_s(buff, 256);
	while (buff[0] != '\0') {
		fputs(buff, fp);
		fputs("\n", fp);
		gets_s(buff, 256);
	}
	fclose(fp);
}
