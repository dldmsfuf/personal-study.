#include <stdio.h>
int main() {
	int data[20];
	int i,j,x;

	printf("20개의 정수 입력:");
	for(i=0;i<20;++i){
		scanf("%d",&data[i]);
	}

	printf("중복된 수는 다음과 같습니다.\n");
    for(i=0;i<20;++i) {

        x=0;

        // i번째 보다 앞에서 중복되는 수가 나오면 이미 앞부분에서 출력했기 때문에

        // 더 이상 진행하지 않고 for문의 앞으로 간다.

        for(j=0;j<i;j++) if(data[j]==data[i]) x=x+1;

        if(x>0) continue;

        for(j=i+1;j<20;j++) if(data[j]==data[i]) x=x+1;

        // 자신을 제외하고 자신과 같은 수가 나오면 중복인 수이다.

        if(x>0) printf("%d ", data[i]);

    }

  
	return 0;
}