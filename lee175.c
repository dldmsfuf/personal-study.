#include<stdio.h>

const int HourPerDay=24;
const int MinPerHour=60;
const int SecPerMin=60;

void main()
{
	printf("하루는 %d초 입니다. \n",HourPerDay*MinPerHour*SecPerMin);
}