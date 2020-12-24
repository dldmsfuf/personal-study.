#include <stdio.h>

int mystrcmp(const char *str1, const char *str2);
int main(void)
{
	char names[5][20] =
	{
		"홍길동","강감찬","이순신","을지문덕","한석봉"
	};
	char name[20];
	int i=0;
	int value;
	
	printf("검색할 이름:");
	scanf("%s",name,sizeof(name));

	printf("사전식 비교: 사전에 앞에 나오는 단어가 작고 뒤에 나오는 단어가 크다고 판별\n");
	
	for(i=0;i<5;i++)
	{
		value = mystrcmp(name, names[i]);

		if (value == 0)
		{
			printf("인덱스 %d에서 %s를 찾았습니다. \n",i,name);
		}
	
		else
		{
			if (value>0)
			{
				printf("%s> %s\n",name, names[i]);
			}
			else
			{
				printf("%s<%s\n",name,names[i]);
			}
		}
	}

	return 0;
}

int mystrcmp(const char *str1, const char *str2)

{
	for (;*str1&&(*str1==*str2); str1++,str2++);
	return *str1-*str2;
}
