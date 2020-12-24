#include <stdio.h>

int main()
{
	int arr[]={5,8,3};
	int s=1,*p;
	int i;
	
	p=&arr[0];
	for(i=0;i<3;i++) {
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	
	for(i=0;i<3;i++) {
		s=s**(p+i);
	}
	printf("\n arr[0] * arr[1] * arr[2]=%d\n",s);
}