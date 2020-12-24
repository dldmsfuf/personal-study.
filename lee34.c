#include <stdio.h>

int main(void) {

char c;
int i;
double d;
char s[20];

printf("문자를 입력>");
scanf("%c",&c);

while (getchar() !='\n') { }
printf("문자열을 입력>");
scanf("%s",s);
printf("정수를 입력>");
scanf("%d",&i);
printf("실수를 입력>");
scanf("%1",&d);

printf("문자c : %c\n",c);
printf("정수i : %d\n",i);
printf("실수d : %f\n",d);
printf("문자열 s: %s\n", s);

}