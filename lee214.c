#include <stdio.h>

int main()
{
	int arr[]={34,-67,25,43,-69,29};
	int *p,max=arr[0],min=arr[0];
	int maxloc,minloc;
	int i;
	
	p=arr;
	printf("arr[]={");

	for(i=0;i<sizeof(arr)/sizeof(int); i++) {
		if(*(p+i)>max){
			max=*(p+i);
			maxloc=i+1;
		}
		if(*(p+i)<min) {
			min=*(p+i);
			minloc=i+1;
		}
		printf("%d",*(p+i));
	}
	printf("} \n");
	printf("ÃÖ´ñ°ª:%d,À§Ä¡:%d\n",max,maxloc);
	printf("ÃÖ¼Ú°ª:%d, À§Ä¡: %d\n",min,minloc);
}