#include <stdio.h>
#include <stdlib.h>
void main() {
	char read[2000];
	
	FILE *rfp, *wfp;
	fopen_s(&rfp, "sum.txt", "r");
	fopen_s(&wfp, "sum-copy.txt","w");

	if (rfp==NULL) {
		printf("파일이 없어서 작업 불가능");
		exit(1);
	}
	for (;;) {
		fgets(read, sizeof(read), rfp);
		if (feof(rfp))
		{
			break;
		}
		fputs(read, wfp);
	}
	fclose(rfp);
	fclose(wfp);
}
