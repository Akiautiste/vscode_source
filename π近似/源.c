#include <stdio.h>
#include <math.h>     
void main()
{
	double sum=0;
	int i;
	for (i = 1;; i++)
	{
		if (fabs(1.0/i) <= 1e-8)
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
/*void main()
{
	int s; float n, t, pi;
	t = 1; pi = 0; n = 1.0; s = 1;
	while (fabs(t)>1e-6)
	{
		pi = pi + t; n = n + 2; s = -s; t = s / n;


	}
	pi = pi * 4;
	printf("pi=%10.6f\n", pi);
}
*/