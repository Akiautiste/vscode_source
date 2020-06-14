#include <stdio.h>
int h, l;
double average;

double caculate(int b[])
{
	int i,sum=0;
	 h = b[0];
	 l = b[0];
	for (i = 0; i < 10; i++)
	{
		if (h < b[i])
		{
			h = b[i];

		}
		else if(l > b[i])
			l = b[i];
		sum += b[i];
	}

	return sum/10.0;
}
void main()
{
	int a[10] = { 66,65,77,65,78,98,76,90,67,60 };
	average = caculate(a);
	printf("maximum is %d ,minimum is %d,average is %f",h,l,average);
}