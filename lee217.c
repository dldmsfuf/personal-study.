#include <stdio.h>

const char* fruit(char s)
{
	switch(s) {
	case 'a':return "apple";
	case 'b':return "banana";
	case 'o': return "orange"; 
	case 's': return "strawberry"; 
	case 'g': return "grape"; 
	case 'p': return "pineapple"; 
	case 't': return "tomato"; 
	default: return "Fruit name is not exist!!!"; 
	} 
}

int main()
{
	char str[2];
	
	do{
		printf("input first one character : ");
		scanf("%c",str,2);
		if(*str=='q'||*str=='Q') {
			return 0;
		}
		printf("fruit=%s\n",fruit(*str));
		while(getchar()!='\n') {}
	} while (1);
}