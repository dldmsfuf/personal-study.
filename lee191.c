#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	FILE *fp;
	char fname[20], buffer[300], word[20];
	int line_num=0;
	printf("파일 이름을 입력하세요:");
	scanf("%s",fname,20);
	printf("검색할 단어는?:");
	scanf("%s",word,20);
	fopen_s(&fp,fname,"r");
	if(fp==NULL) {
		fprintf(stderr,"파일%s를 열 수 없어요\n",fname);
		exit(1);
		
	}
	while (fgets(buffer, 300, fp)) {
		line_num++;
		if(strstr(buffer,word))
			printf("%s:%d단어%s이 발견!\n",fname, line_num, word);
		else
			printf("%s:%d단어를 찾을 수 없읍니다 \n",fname, line_num);
	}
	fclose(fp);
	puts("complete");
	return 0;
}
