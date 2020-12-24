#include <stdio.h>

int main(void) {

int a[3][9];
int i,j;

for(i=1;i<=9;i++) {

a[1][i]=2*i;
a[2][i]=3*i;
a[3][i]=4*i;
}

for(j=1;j<=9;j++) {
printf("%3d",a[1][j]);
}
printf("\n");

for(j=1;j<=9;j++) {
printf("%3d",a[2][j]);
}
printf("\n");

for(j=1;j<=9;j++) {
printf("%3d",a[3][j]);
}
printf("\n");
}