#include <stdio.h>

int main(void) {

int a,b,c,f,i,h=0,j,k,m;
char d;

while(1) {

printf("원하는 홀숫값을 입력하시오");
scanf("%d",&c);

if(h==c%2) {
printf("짝수를 입력하셨습니다 홀수를 입력해주세요\n");
continue;} else{

for(a=1;a<=c;a++) {
f=2*a;
for(b=a;b<=c;b++) {

printf(" ");

}
for(i=1;i<f;i++) {
printf("*");
}
printf("\n");
}
for(j=1;j<=c;j++) {
f=2*j;
for(k=1;k<=j+1;k++) {

printf(" ");

}
for(m=1;m<=2*(c-j)-1;m++) {
printf("*");
}
printf("\n");
}
while (getchar() != '\n') {}


printf("계속하실건가요?(y/n)");
scanf("%c",&d);

if((d=='y') || (d=='Y')) { continue;} else {exit(0);}
}

}

}