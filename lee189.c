
#include <stdio.h>
void main() {
	int num, i, sum =0;
	FILE *fp;
	fopen_s(&fp, "sum.txt","w");
	for(i=0;i<3;i++) {
		printf("숫자 총 3개중 %d번째 숫자 입력:", i+1);
		scanf("%d",&num);
		sum += num;
	}
	printf("숫자 3개의 총 합: %d \n",sum);
	fprintf(fp,"숫자 3개의 총 합:%d\n",sum);

	fclose(fp);
	
}
