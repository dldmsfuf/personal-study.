#include <stdio.h>

int a(double c){

printf("È­¾¾ %3.2lfµµ¸¦  ¼·¾¾·Î ¹Ù²Û°ª: %3.2lf",  c, (c-32)/1.8 );
return 0;
}

int b(double f){

printf( "¼·¾¾ %3.1lfµµ¸¦  È­¾¾·Î ¹Ù²Û°ª:%3.2lf",f, 1.8*f+32);
return 0;
}

int main(void){

double c,e,f;

int d;

printf("¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä.");
scanf("%lf",&c);
printf("È­¾¾¸é 1,¼·¾¾¸é 2¸¦ ÀÔ·ÂÇÏ¼¼¿ä.");
scanf("%d",&d);



if(d==1) {a(c);
            
     } 
else {    b(c);
           }
}