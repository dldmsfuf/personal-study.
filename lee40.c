#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

int a,b=0,c=0,i;

srand((unsigned)time(NULL));

for(i=1;i<=10;i++) {

a=rand()%((100-1)+1)+1;

if(1==a%2) {

printf("%d=È¦¼ö\n",a);n
b=b+a;
}

else {
printf("%d=Â¦¼ö\n",a);
c=c+a;
}

}
printf("È¦¼öµéÀÇ ÇÕ=%d\nÂ¦¼öµéÀÇ ÇÕ=%d",b,c);	
}