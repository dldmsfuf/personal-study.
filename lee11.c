#include <stdio.h>

int main(void) {

int i, j;

for(j=0; j<9; j++) {
printf("%d´Ü",j+1);
for(i=0;i<9;i++) {
printf("%dx%d=%2d  ", j+1,i+1, (j+1)*(i+1));
}
printf("\n");
}

}