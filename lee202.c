#include <stdio.h>

void printArr(int(*pArr)[4],int row,int col) {
	int i,j;
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++)
			printf("%d",pArr[i][j]);
		printf("\n");
	}
}
int main() {
	int arr[3][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	int row=sizeof(arr)/sizeof(arr[0]);
	int col=sizeof(arr[0])/sizeof(arr[0][0]);
	printArr(arr,row,col);
}