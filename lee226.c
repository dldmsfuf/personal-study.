#include<stdio.h>

struct user {
	char name[30];
	char num[30];
};
int main(void) {
char n[30];
int i, g;
int x;
int y=0;
struct user a[20]={"\n"};
while(1) {

printf("***Menu***\n1. insert\n2. delete\n3. search\n4. print all\n5. exit\nchoose the item:");
scanf("%d",&x);

switch(x){
	case 1:
		printf("[INSERT]\nInput Name:");
		scanf("%s",a[y].name);
		printf("[INSERT]\nInput Tel Number:");
		scanf("%s",a[y].num);
		printf("Data Inserted");
		y=y+1;
		break;
	case 2:
		printf("[Delete]\nInput Name:");
		scanf("%s",n);
		for(i=0;i<20;i++) {
			if(strcmp(a[i].name,n)==0) {
				strcpy(a[i].name, NULL);
				strcpy(a[i].num, NULL);
				printf("\nData Deleted\n");
				break;
			}
			if(i==19) {
				printf("\nNot Found\n");
			}
		}
		break;
	case 3:
		printf("[Search]\nInput Name:");
		scanf("%s",n);
		for(i=0;i<20;i++) {
			if(strcmp(a[i].name,n)==0) {
				printf("%s      %s",a[i].name,a[i].num);
				printf("\nData Found\n");
				break;
			}
			if(i==19) {
				printf("\nNot Found\n");
			}
		}
		break;
	case 4:
		printf("[Print All]\n");
		for(i=0;i<20;i++) {
			if(strcmp(a[i].name,'\n') != 0) {
			printf("Name: %s    Tel: %s\n",a[i].name,a[i].num);
			g=1;
			}
		}
		if(g==1) {
			printf("Data Print");
		}
		else {
			printf("No Data");
		}
		break;
	case 5:
		exit(0);
		break;
	}		
}
}