#include<stdio.h>

int main(void) 
{
	int array[3]={10,20,30};

	printf("%p %p %p\n", array, array+0, &array[0]);
	printf("%p %p\n", array + 1, &array[1]);
	printf("%p %p\n",array + 2, &array[2]);
	printf("%u %u %u\n",sizeof(array), sizeof(array + 0), sizeof(&array[0]));
}