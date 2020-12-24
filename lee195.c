#include <stdio.h>
#include <string.h>

int main() {
	char str1[255], str2[255];

	printf("문자열 2개를 입력하십시오.>");
	scanf("%s %s",str1, str2);
	
	if(strcmp(str1, str2)==0)
		printf("%s와 %s는 같다.\n",str1,str2);
	else if(strcmp(str1, str2)<0)
		printf("%s와 %s보다 작다.\n",str1,str2);
	else
		printf("%s는 %s보다 크다.\n",str1,str2);

	return 0;
}