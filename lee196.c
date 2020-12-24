#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int SumOfNum(char* str)
{
	int sum=0;
	int i;

	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			sum+=str[i]-'0';
		}
	}
	return sum;
}
int main()
{
	char str[20];
	
	printf("19자 이내의 문자열 입력: ");
	scanf("%s",str);

	printf("숫자만 구해서 더했어요:%d:\n",SumOfNum(str));

	return 0;
}