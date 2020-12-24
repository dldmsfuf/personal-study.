#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	const char *str1="Kitty on your lap";
	const char *str2="~당신의 무릎 위에 고양이~";
	char *str3 = (char*)malloc(strlen(str1)+strlen(str2)+1);
	*str3=0;

	strcat(str3,str1);
	strcat(str3,str2);
	printf("%s\n",str3);

	free(str3);
	return 0;
}