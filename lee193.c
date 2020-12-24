#include <stdio.h>
#include <string.h>

int main() {
	char str1[256] = "Kitty on your lap";
	strcat(str1, "~당신의 무릎 위에 고양이~");
	printf("%s\n",str1);

	return 0;
}