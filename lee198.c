#include <stdio.h>
	
int main() {
	int i, j;
	int a[5]={1,2,3,4,5};
	int b[6]={10,20,30,40,50,60};
	int c[7]={100,200,300,400,500,600,700};
	int *pArr[3]={a,b,c};
	int sub_len[3]=
	{sizeof(a)/sizeof(int), sizeof(b)/sizeof(int), sizeof(c)/sizeof(int)};
	int len=sizeof(pArr)/sizeof(int*);

	for(i=0;i<len;i++){
		for(int j=0;j<sub_len[i];j++)
			printf("%d",pArr[i][j]);
		printf("\n");
	}
}