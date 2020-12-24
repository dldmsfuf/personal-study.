#include<stdio.h>
int main(void) {

int a=0;

while(1) {

printf("%d\n",a);

a=a+1;

if(a==53){
system("pause");
continue;
}
}

}