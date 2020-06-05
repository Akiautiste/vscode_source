#include <stdio.h>
#include <math.h>
void main()
{
	double sum=0;
	int i;
	for (i = 1;; i++)
	{
		if (fabs(1.0/i) <= 1e-6)
			break;
		if(i%2==0)
		sum = sum + (1.0/(2.0*i-1))*(-1);
		else
		{
			sum = sum + 1.0 / (2.0*i-1);
		}

	}
	printf("%5.60lf", 4 * sum);
	
}