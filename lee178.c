#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;

	int* arr[3] = { &a,&b,&c };
	printf("%d\n", *arr[0]);
	printf("%d\n", *arr[1]);
	printf("%d\n", *arr[2]);

	char str1 = 'a';
	char str2 = 'b';
	char str3 = 'c';

	char* arr2[3] = { &str1,&str2,&str3 }; 
	printf("%c\n", *arr2[0]);  
	printf("%c\n", *arr2[1]);
	printf("%c\n", *arr2[2]);

	char* arr3[3] = { "hi","hello","bye" }; //포인터배열
	printf("%s\n", arr3[0]); 
	printf("%s\n", arr3[1]);
	printf("%s\n", arr3[2]);

        char arr4[3][6] = { "hi","hello","bye" }; //배열
	printf("%s\n", arr4[0]); 
	printf("%s\n", arr4[1]);
	printf("%s\n", arr4[2]);


}