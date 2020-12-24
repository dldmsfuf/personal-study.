#include <stdio.h>

int main(void) {
int a,b,c,d,e,f;

while(1) {

printf("¿øÇÏ´Â µÎ¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä");
scanf("%d %d",&a,&b);

c=a+b;
d=a-b;
e=a*b;
f=a/b;

printf("µ¡¼À:%d\n»¬¼À:%d\n°ö¼À:%d\n³ª´°¼À:%d\n",c,d,e,f);
}
}