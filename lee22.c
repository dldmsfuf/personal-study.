#include <stdio.h>
int main(void){

int i,g,a,b,c;

for(g=1; g<=3; g++){

printf("원하는 단을 입력하세요.");
scanf("%d",&a);

for(i=1;i<=9;i++) {
printf("%dx%d=%d\n",a,i,a*i);
}

}
printf("프로그램을 종료합니다.");
}