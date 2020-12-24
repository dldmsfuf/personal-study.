#include <stdio.h>
int main(void) {

int a,b,c,f,h,i,g;

printf("원하는 홀수값을 입력하세요");
scanf("%d",&a);

for(i=1;i<=a;i++) {
f=2*a;
for(b=1;b<=i;b++) {

printf(" ");

}
for(c=1;c<=2*(a-i)+1;c++) {
printf("*");
}
printf("\n");
}

for(f=1;f<=a-1;f++) {

for(h=f;h<=a-1;h++) {

printf(" ");
}
for(g=1;g<=2*f+1;g++) {
printf("*");
}
printf("\n");
}

}


