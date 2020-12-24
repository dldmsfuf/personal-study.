#include <stdio.h>
int main(void){

int i, k;


for(k=2; k<=9; k++){
for(i=1;i<=9;i++) {
printf("%dx%d=%d\n",k,i,k*i);
}

printf("\n");
}
}

