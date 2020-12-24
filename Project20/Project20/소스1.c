#include<stdio.h>
int main(void) {

	int a = -1, b = 9, c = 3, d = 1, e = 0, f = 0, g = 10, s;

	while (a != 0) {

		printf("\n원하는 값을 입력하세요(종료:0)");
		scanf("%d", &a);

		(a == 0) ? exit(0) : printf("\n");

		s = a;

		while (s < g) {
			while (f < b) {
				f++;
				e = s * d;
				printf("\n%d x %d = %d", s, d, e);
				d++;
			}
			s++;
			d = 1;
			f = 0;
		}
	}


}