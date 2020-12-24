#include <stdio.h>

const char* DayName(int n)
{
	const char* day[]={"일","월","화","수","목","금","토"};
	return day[n];
}

int main()
{
	int n;
	
	printf("일요일부터 n일 지난 날의 요일을 확인합니다. \n");
	printf("n값을 입력하세요:");
	scanf("%d",&n);

	printf("일요일로부터 %d일 지난 날은 %s요일 입니다\n",n,DayName(n%7));
}