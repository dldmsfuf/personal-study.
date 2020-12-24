#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i, j, sum=0,max=0,num=0;
	double ave;
	int arr[60];
	int count[10]={NULL};

	printf("다음과 같은 0에서 9까지의 정수에서 \n");
	
	for(i=0;i<60;i++)
	{
		arr[i]=rand()%10;
		if(i%20==0) {
			printf("\n");
			sum+=arr[i];
			printf("%d",arr[i]);
		}	
	}
	printf("\n");

	for(i=0;i<60;i++)
	{
		for(j=0;j<10;j++)
		{
			if(arr[i]==j)
			{
				count[j]++;
			}
		}
	}

	ave=(double)sum/60;
	printf("\n********\n 평균 \n********\n");
	printf("배열 원소의 평균을 구하려한다.\n");
	printf("배열원소의 수는 %d이고, 배열원소의 전체합은 %d이므로 \n",60,sum);
	printf("평균은 %4lf이다.\n",ave);
		
	printf("\n********\n 분포 \n********\n");
	printf("---------------------------------------------\n");
	printf("       수     횟수    히스토그램 \n");
	printf("---------------------------------------------\n");
	for(j=0;j<10;j++)	
	{
		printf("%11d%10d",j,count[j]);
		printf("\t\t");
		for(i=0;i<count[j];i++)
		{
			printf("*");
			printf("\n");
			if(max<count[j])
			{
				max=count[j];
				num=j;
			}
		}
	printf("\n");
	printf("분포에서는 수의 빈도 횟수를 나타낸다.\n");
	printf("분석결과, 가장많은 빈도수는 수 %d(이)가 %d번 나타났다.\n",num,max);
	
	return 0;
}
}