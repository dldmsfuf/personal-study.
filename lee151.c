#include <stdio.h>
int main(void) {

char A[8]={"홍길동1"}, B[8]={"홍길동2"};
/*char B[5][8]={ 
{"홍길동1"},
{"홍길동2"},
{"홍길동3"},
{"홍길동4"},
{"홍길동5"},
};
*/
int a;

if(strcmp(A,  B)!=0) {
printf("a");
}
else {
printf("b");
}

/* printf("조회하고자하는 사람의 이름을 입력하시오.");
scanf("%c",&A[8]);

for(a=0;a<=4;a++) {
if(strcmp(B[a][8],A)==0) {
printf("a");
}
else {
printf("b");
}
}

*/
}