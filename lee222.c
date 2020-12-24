#include "stdafx.h"
int park[100]={ 0 };
int way[100]={ 0 };
int park_top=0;
int way_top=0;
int num=0;
int num_out=0;
int mode=0;
int out_car=0;
int push(int value) {
	park[park_top]=value;
	park_top++;
	way_top--;
	return park_top;
}
int push_way(int value) {
	way[way_top]=value;
	way_top++;
	return way_top;
}
int pop() {
	park_top--;
	way_top++;
	way[way_top]=park[park_top];
	return park[park_top];
}
int main() {
	while(1) {
		printf("동작을 선택하세요 (1.입차 2.출자 3.주차장 상태보기):");
		scanf("%d",&mode);
		if(mode==1){
			printf("1.자동차 번호를 입력해 주세요:");
			scanf("%d",&num);
			push(num);
			printf("자동차가 주차되었습니다.차량번호: %d\n",park[park_top-1]);
			way_top=0;
		}
		else if(mode == 2) {
			printf("2.출차 할 자동차 번호를 입력 해 주세요:");
			scanf("%d",&num_out);
			for(int i=0;i<park_top;i++) {
				if(num_out==park[i]) {
					out_car=1;
				}
			}
			if(out_car==1) {
				printf("출차 할 차량이 있습니다. 출차를 위해 다른 차량을 출차합니다.\n");
				while(num_out != park[park_top]) {
					if(num_out == park[park_top]) {park_top--;break;}
					else if(num_out !=park[park_top]){
						pop();
					}
					printf("출차 : %d\n",park[park_top]);
					printf("막다른 길:");
					for(int i=1;i<way_top;i++) {
						printf("%d",park[i]);
					}
					printf("\n");
				}
				printf("%d 차량이 출차 되었습니다.\n",park[park_top]);
				printf("막다른길의 차들을 다시 주차장에 주차합니다.\n");
			
				while (way_top>=1) {
					push(way[way_top-1]);
					printf("입차: %d\n",way[way_top]);
					printf("막다른길: %d");
					for(int i=0;i<way_top-1;i++) {
						printf("%d",way[i]);
					}
					printf("\n 주차장:");
					for(int i=0;i<park_top-1;i++) {
						printf("%d",park[i]);
					}
					printf("\n");
				}
			}
			else
				printf("출차 할 차량이 없습니다.\n");
		}
		else if (mode==3) {
			for(int i=0;i<park_top;i++) {
				printf("%d \n",park[i]);
			}
		}
	}
	return 0;
}