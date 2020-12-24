#include <stdio.h>

int main(void){

	int arr[2][3]={
		{10,20,30},
		{40,50,60}
	};
	int (*pArr)[3]=arr;

	printf("%d\n",arr[1][1]);
	printf("%d\n",pArr[1][1]);
}