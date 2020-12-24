#include <stdio.h>
 
int main(void) {

int a,b,c=0,d,e,f,g=0,h,i,j,l,k,m,n,o,p,q,r,s;

srand((unsigned)time(NULL));

while(1) {

printf("*메인 프로젝트*\n");
printf("1.게임\n2.별 만들기\n3. 종료\n");
printf("원하는 작업의 번호를 입력하세요.\n");
scanf("%d",&a);

switch(a) {

case 1: while(1) { 
printf("*게임 프로그램*\n1.숫자맞히기 게임\n2.상위 화면으로 가기\n3.종료하기\n원하는 작업의 번호를 입력하세요.");
scanf("%d",&d);

switch(d) {

case 1:
c=rand()%((5-1)+1)+1;
while(1){
printf("1~5까지의 숫자중 원하는 숫자를 입력하세요.");
scanf("%d",&b);
if(b==c) {
printf("정답입니다\n");
break;
}
else {
printf("틀렸습니다.한번더 해보세요.\n");
}
}
break;

case 2: 
break;

case 3: printf("프로그램을 종료합니다.");
exit(0);
break;
}
break;}
case 2: while(1) {
printf("*별만들기*\n1.역삼각형\n2.마름모\n3.상위 화면으로 가기\n4.종료");
scanf("%d",&e);

switch(e) {

case 1: printf("원하는 홀숫값을 입력하시오");
scanf("%d",&f);

if(g==f%2) {
printf("짝수를 입력하셨습니다 홀수를 입력해주세요\n");
continue;} else{

for(h=1;h<=f;h++) {
j=2*h;
for(l=1;l<=h;l++) {

printf(" ");

}
for(i=1;i<=2*(f-h)+1;i++) {
printf("*");
}
printf("\n");
}
}
break;
case 2:
 printf("원하는 홀숫값을 입력하세요");
scanf("%d",&k);

if(g==k%2) {
printf("짝수를 입력하셨습니다 홀수를 입력해주세요\n");
continue;} else{
for(m=1;m<=k;m++) {
p=2*a;
for(n=m;n<=k;n++) {
printf(" ");
}
for(o=1;o<p;o++) {
printf("*");
}
printf("\n");
}
for(q=1;q<=k;q++) {
p=2*q;
for(r=1;r<=q+1;r++) {
printf(" ");
}
for(s=1;s<=2*(k-q)-1;s++) {
printf("*");
}
printf("\n");
}
}
}
}
}
}
}