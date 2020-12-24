#include <stdio.h>

int main(void) {

int a,b,c,d; 

printf("구구단의 단수을 입력하세요");
scanf("%d",&a);



for(b=1;b<=a;b++) {
printf("\n%d단\n",b);
for(c=1;c<=9;c++) {
d=b*c;
printf("\n%dx%d=%d",b,c,d);
}
}
}