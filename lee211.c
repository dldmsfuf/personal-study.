#include <stdio.h>
#include <string.h>

int main() {
	char buffer[80];
	char *p=buffer;
	int len;
	int i;
	
	printf("input string:");
	scanf("%s",buffer,80);
	len=strlen(p);
	
	while (*p) {
		p++;
	}
	
	printf("Inverse String");
	for(i=0;i<len;i++) {
		p--;
		putchar(*p);
	}
	putchar('\n');
}
