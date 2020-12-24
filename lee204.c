#include <stdio.h>
#define SIZE 5

void copyarray(double *source, double*target, int size)
{
	int i;

	for(i=0;i<size;i++)
	{
		*(target+i)=*(source+i);
		printf("%.21f",*(target+i));
	}
	printf("\n");
}

int main() {
	double source[SIZE]={ 3.12, 5.14, 7.25, 7.48, 5.91 };
	double target[SIZE];

	copyarray(source, target, SIZE);
	
	return 0;
}
