#include <stdio.h>

int main(void) {

int a[3][9];
int i,j, k2=0, k3=0, k4=0;


for(j=0;j<=2;j++) {
for(i=0; i<=8; i++){

if(j==0){k2+=2; a[j][i]=k2;}
	else if(j==1){k3+=3; a[j][i]=k3;}
		else {k4+=4; a[j][i]=k4;}

}}

for(j=0;j<=2;j++) {
for(i=0; i<=8; i++){
printf("%3d",a[j][i]) ;
}
printf("\n");
}

}
