#include <stdio.h>
int main(void) {

unsigned short us=40000;
char c=(char)us;
short s=us;
int i=us;
double d=us;

printf("%d\n",us);
printf("%d\n",c);
printf("%d\n",s);
printf("%d\n",i);
printf("%lf",d);

}