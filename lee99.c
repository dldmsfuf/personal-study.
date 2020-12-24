#include <stdio.h>

int main(void) {

int a,b,c,d=0,e=0,f,g=0;

printf("*** 코리아 카페***\n1. 아메리카노    :2500원\n2. 카페라떼      :3000원\n3. 화이트모카라떼:4000원\n4. 햄치즈샌드위치:6000원\n5. 종료\n무슨 주문을 하시겠습니까?.");
scanf("%d",&a);

if(a==1) {
a=2500;
}
else {
if(a==2) {
a=3000;
}
else {
if(a==3) {
a=4000;
}
else {
if(a==4) {
a=6000;
}
}
}
}

while(1) {

printf("주문을 더 하시겠습니까?\n 더 하시고 싶으시면 1, 취소하실려면 2를 입력해주세요.");
scanf("%d",&b);

if(b==1) {
printf("무슨 주문을 하시겠습니까?");
scanf("%d",&c);

if(c==1) {
c=2500;
}
else {
if(c==2) {
c=3000;
}
else {
if(c==3) {
c=4000;
}
else {
if(c==4) {
c=6000;
}
}
}
}
d=c+d;
}
else {
e=a+d;
printf("주문하신 음식들의 비용은 %d입니다.\n지불하실 금액을 입력하세요.",e);
scanf("%d",&f);
g=f-e;
printf("총 %d원을 받았고 거스름돈은 %d입니다.\n즐거운 하루 보내세요.",f,g);
break;
}
}
}

