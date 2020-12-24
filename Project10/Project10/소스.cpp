#include <stdio.h>
#include <conio.h>

int main() {
	FILE* fp;

	fopen_s(&fp, "Test.cpp", "w");
	
	printf("Ctrl+z to exit \n");
	printf("input codes : \n");
	char c = 0;

	while ((c = getc(stdin)) != EOF) {
		putc(c, fp);

	}
	printf("Save in Test.cpp");

	fclose(fp);

}