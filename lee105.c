#include <stdio.h>

int numbercompare(int num1,int num2);

int main(void){
printf("3과 4중에서 큰수는 %d이다.\n",numbercompare(3,4));
printf("7과 2중에서 큰수는 %d이다. \n",numbercompare(7,2));
}

int numbercompare(int num1,int num2){
if(num1>num2)
return num1;
else
return num2;
}