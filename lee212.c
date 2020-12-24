#include <stdio.h>

int main()
{
	char buffer[80];
	char *p=buffer;
	int len =1;
	int i;
	
	printf("input string: ");
	scanf("%s",buffer,80);
	
	while(*p) {
		p++;
		len++;
	}
	printf("inverse string:");
	for(i=0;i<len;i++) {
		putchar(*--p);
	}
	putchar('\n');
}