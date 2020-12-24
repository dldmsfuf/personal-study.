#include <stdio.h>
#include <stdlib.h>
#define FNAME "data.txt"

typedef struct Member
{
	int num;
	char name[200];
	char addr[200];
}Member;

void StoreData()
{
	Member arr[5]=
	{
		{1,"홍길동","서울특별시 종로구 종로 1가 1번지"},
		{6,"강감찬","서울특별시 종로구 종로 1가 2번지"},
		{12,"이순신","서울특별시 종로구 종로 1가 3번지"},
		{8,"을지문덕","서울특별시 종로구 종로 1가 4번지"},
		{9,"한석봉","서울특별시 종로구 종로 1가 5번지"},
	};

	FILE *fp;
	int n=5;

	fopen_s(&fp,FNAME,"w");

	if(fp==NULL)
	{
		perror("파일 열기 실패");
		exit(0);
	}

	fwrite(&n,sizeof(int),1,fp);
	fwrite(arr,sizeof(Member),n,fp);

	fclose(fp);
}

void LoadData()
{
	Member arr[5];
	FILE *fp;
	int n;
	int i;

	fopen_s(&fp,FNAME,"r");

	if(fp==NULL)
	{
		perror("파일 열기 실패");
		exit(0);
	}

	fread(&n,sizeof(int),1,fp);
	fread(arr,sizeof(Member),n,fp);

	fclose(fp);
	
	printf("회원 수 :%d\n",n);
	for(i=0;i<n;i++)
	{
		printf("번호:%d이름:%s주소:%s\n",arr[i].num,arr[i].name,arr[i].addr);
	}
}
int main(void)
{
	StoreData();
	LoadData();
	return 0;
}