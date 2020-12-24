#include<stdio.h>
int main(void) {

int b,c,d,e,f,i;
char a;

for(i=1;i<=3;i++) {

printf("당신의 이름은?");
scanf("%c",&a);

printf("%c의 수학,국어,영어점수는?",a);
scanf("%d %d %d",&b,&c,&d);
e=b+c+d;
f=e/3;

printf("%c의 국어점수:%d수학점수:%d영어점수:%d총점:%d평균:%d학점:",a,c,b,d,e,f);

if(90<=f) {
printf("A\n");
}

else if(80<=f) {
printf("B\n");
}
else if(70<=f) {
printf("C\n");
}
else if(60<=f) {
printf("D\n");
}
else {
printf("F\n");

}
while (getchar() !='\n') {};
}

}