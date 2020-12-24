#include <stdio.h>
#include <math.h>

double sigma (double(*tring_func) (double),double dLower, double dUpper);

int main()
{
	double dSum;
	
	dSum=sigma(sin,0.1,1.0);
	printf("The Sum of the sine from 0.1 to 1.0 is %g \n", dSum); 
	dSum = sigma(cos, 0.5, 3.0); 
	printf("The Sum of the cosine from 0.5 to 3.0 is %g \n", dSum); 
}
double sigma(double(*tring_func)(double),double dLower, double dUpper)
{
	double dCount, dTotal=0.0;
	for(dCount=dLower;dCount<=dUpper;dCount +=0.1) {
		dTotal=dTotal+tring_func(dCount);
	}
	return dTotal;
}