#include <stdio.h>
int main() {
	int a=10;
	int b=20;
	int c=30;
	int *pArr[3]={&a,&b,&c};
	printf("%d\n",*pArr[0]);
	printf("%d\n",*pArr[1]);
	printf("%d\n",*pArr[2]);
}