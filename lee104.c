#include <stdio.h>

int Add(int num1,int num2) {
return num1+num2;
}

void showaddresult(int num){
printf("덧겜결과 출력:%d",num);
}
int readnum(void){
int num;
scanf("%d",&num);
return num;
}

void howtousethisprog(void) {
printf("두개의 정수를 입력하시면 덧셈결과가 출력됩니다.\n");
printf("자! 그럼 두개의 정수를 입력하세요.\n");
}

int main(void) {
int result, num1,num2;

howtousethisprog();
num1=readnum();
num2=readnum();
result=Add(num1,num2);
showaddresult(result);
}
