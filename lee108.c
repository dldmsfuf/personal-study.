#include <stdio.h>


void c(int x,int z) {
if(x>z){
printf("가장 큰수:%d",x);
}
else{
printf("가장 큰수:%d",z);
}
}

void a(int x,int y,int z) {
if(x>y){
c(x,z);
printf("가장 작은수:%d",y);
}
else{
c(y,z);
printf("가장 작은수:%d",x);
}
}

int main(void) {

int x,y,z;

printf("크기를 비교할 숫자3개를 입력하세요.");
scanf("%d %d %d",&x,&y,&z);

a(x,y,z);
}