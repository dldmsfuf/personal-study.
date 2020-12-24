#include <stdio.h>

int main(void) {

char inputdata[20];
char upperdata[20];
int i=0;

printf("문자열을 입력");

gets(inputdata);

while(inputdata[i] !='\0') {

if((inputdata[i] >='a')&&(inputdata[i]<='z')) {

upperdata[i] = inputdata[i] -32;

}
else {upperdata[i]=inputdata[i];}


i++;
}
upperdata[i]='\0';
printf("입력한 문자열: %s변환한 문자열:%s\n",inputdata, upperdata);
}