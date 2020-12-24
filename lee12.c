#include <stdio.h>
int main(void) {

int a, i;

printf("원하는 단을 입력하세요.");
scanf("%d",&a);

printf("%d단\n",a); 

for(i=2; i<= 9 ; i++){
printf("%dx%d=%d\n",a,i,a*i);

}

printf("i= %d \n", i+100);

}