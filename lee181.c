#include <stdio.h>
int main()
{
	int arr[3] = {1, 2, 3};
	int* p=NULL;
	p=arr;
	printf("%d %d %d \n",p[0], p[1], p[2]);
	printf("%d %d %d \n",*p,*(p+1),*(p+2));
	printf("====== \n");
	p=arr+1;
	printf("%d %d %d \n",p[-1],p[0],p[1]);
	printf("%d %d %d \n",*(p-1),*p,*(p+1));
	printf("====== \n");
	p=arr+2;
	printf("%d %d %d \n", p[-2],p[-1],p[0]);
	printf("%d %d %d \n", *(p-2), *(p-1), *p);

}