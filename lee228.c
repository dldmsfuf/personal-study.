#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void FindInfo();
void ReInfo();
void DelInfo();
void AddInfo();

typedef struct CusData{
	char name[100];
	int mile;
	int num;
	int year;
	double key;
}CusData;
void ReInfo(int num, CusData *cus)
{
	int i,j;
	int done = 0;
	char name[100];
	int info;
	Cus