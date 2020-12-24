#include <stdio.h>
int main(void)
{

int i,j;
int size=0;

printf("ют╥б");
scanf("%d",&size);

for(i=1;i<=size;i++) {
for(j=1;j<=size;j++) {
if((i==j)||(i+j==size+1))
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}