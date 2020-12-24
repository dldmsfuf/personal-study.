#include<stdio.h>

void main()
{
	int i = 5;
	int *pi = &i;
	const int* pci;
	int* const cpi = &i;
	const int* const cpci = &i;
	
	int** ppi1 = &pi;
	ppi1++;
	(*ppi1)++;
	**ppi1 = 0;

	const int** ppi2 = &pci;
	ppi2++;
	(*ppi2)++;
	**ppi2 = 0;

	int* const* ppi3 = &cpi;
	ppi3++;
	(*ppi3)++;
	**ppi3 = 0;

	int** const ppi4 = &pi;
	ppi4++;
	(*ppi4)++;
	**ppi4 = 0;

	const int* const* const ppi5 = &cpci;
	ppi5++;
	(*ppi5)++;
	**ppi5 = 0;
}