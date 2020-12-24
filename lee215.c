#include <stdio.h> 
void chUp(char* ptr); 
int main() 
{ 
	char arr[100]; 
	printf("소문자를 대문자로 바꿀 문자열을 입력하세요 : "); 
	scanf("%s", arr, 100); 
	chUp(arr); 
	printf("바꾼 문자열은 %s 입니다", arr); 
} void chUp(char* ptr) 
{ 
	while (*ptr) 
	{ 
		if ('a' <= *ptr && *ptr <= 'z') 
			{ 
				*ptr -= 32; 
			} else 
			if ('A' <= *ptr && *ptr <= 'Z') 
			{ 
				*ptr += 32; 
			} 
		ptr++; 
	} 
}

