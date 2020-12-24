#include <stdio.h>

int main(){
//FILE *fp;
int b,c,d,k=0,g=0,j=0,l=0;
int a[10][10];
int z[10][10];
int y[10][10];
int x[10][10];

printf("배열의 크기를 입력하시오");
scanf("%d", &b); //4

for(c=0;c<b;c++) {
	for(d=0;d<b;d++) { k++;
		a[c][d]=k;
		printf("%3d",a[c][d]);
	}
	printf("\n");
}
printf("\n\n"); 
      
for(c=b-1;c>=0;c--) {
             
	for(d=0;d<b;d++) { j++;
              
		z[c][d]=j;
		
	}}

	
for(c=0;c<b;c++) {
             
 for(d=0;d<b;d++) {


printf("%3d",z[d][c]); }

printf("\n");
}

printf("\n\n");
for(c=b-1;c>=0;c--) {
	for(d=b-1;d>=0;d--) {
		y[c][d]=(d+1)+(b*c);
		printf("%3d",y[c][d]);
	}
	printf("\n");
}
printf("\n\n");
for(c=0;c<b;c++) {
	for(d=b-1;d>=0;d--) {g++;
		x[d][c]=g;
		
	}
}
for(c=0;c<b;c++) {
             
 for(d=0;d<b;d++) {
//              1 0

printf("%3d",x[c][d]); }

printf("\n");
}
}