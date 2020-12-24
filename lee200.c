#include <stdio.h>
	
int main(){
	int i=0;
	int arr[5]={1,2,3,4,5};
	int *pArr=arr;
	for(i=0;i<sizeof(arr)/sizeof(int); i++)
		printf("%d",pArr[i]);
	printf("\n");
}