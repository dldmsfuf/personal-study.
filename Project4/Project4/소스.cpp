#include <stdio.h>

int main(void)
{
	errno_t err;
	FILE* fp;

	err = fopen_s(&fp, "data.txt", "wt");  // 전체 path 경로를 지정, 아니면 실행파일이 있는 곳에 생성됨 
	if (err == 0)
		puts("파일오픈 성공!\n");
	else {
		puts("파일 오픈 실패\n");
		return -1;
	}
	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Hong \n", fp);
	fputs("Your name is Yoon \n", fp);
	fflush(stdout);
	fclose(fp);
	return 0;

}
