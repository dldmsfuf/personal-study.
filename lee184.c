#include <stdio.h>

int main(void)
{
	int array[3]={10,20,30};
	int* p=NULL;

	p=array;

	printf("%p %p %p\n",p,p+0,&p[0]);
	printf("%p %p\n",p+1,&p[1]);
	printf("%p %p\n",p+2,&p[2]);
}