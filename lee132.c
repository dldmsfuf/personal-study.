#include <stdio.h>

int main(void) {

int A[3][7]={
{100,80,70,0,0,0,0},
{90,100,80,0,0,0,0},
{60,90,70,0,0,0,0}
};
int a,b;

for(a=0;a<3;a++) {
for(b=0;b<3;b++){ 
   A[a][3]+=A[a][b];
  }
A[a][4]=A[a][3]/3;

if(A[a][4]>=90){ A[a][6]=65;}
else if(A[a][4]>=80){A[a][6]=66;}
   else if(A[a][4]>=70){A[a][6]=67;}
     else if(A[a][4]>=60){A[a][6]=68;}
          else {A[a][6]=70;}

}


for(a=0;a<3;a++) {
for(b=0;b<5;b++) {
printf("%4d",A[a][b]);
}
printf("%4c",A[a][6]);
printf("\n");
}


}