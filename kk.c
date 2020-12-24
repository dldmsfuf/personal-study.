#include <stdio.h>
int main()
{
	int arr[3] = {1, 2, 3};
	int *pointer=arr;

	
	printf("%x %x %x\n", pointer, pointer+0, &pointer[0]);
	printf("%x %x\n", pointer+1, &pointer[1]);
	printf("%x %x\n", pointer+2, &pointer[2]);

	printf("%d %d %d\n", *pointer, *(pointer+0), *&pointer[0]);

	printf("%d %d\n", *(pointer+1), *&pointer[2]);
	printf("%d %d\n", *(pointer+1), *&pointer[2]); 
	return 0;  
} 

