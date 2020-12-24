#include <stdio.h>
int main(void) {


char Str[10];
int i;
char c;
char inputStr[20];

gets(inputStr);
sscanf(inputStr, "%c %d", &c,&i);
scanf("%s",Str);
printf("%s",inputStr);

}