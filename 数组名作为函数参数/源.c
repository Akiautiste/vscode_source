#include <stdio.h>
double average(int a[]);
void main()
{
	double r;
	int score[10] = { 60,60,61,66,67,62,63,60,66,60 };
	r = average(score);
	printf("average is %f\n", r);
}
double average(int a[])
{
	int i,sum=0;
	for ( i = 0; i < 10; i++)
	{
		sum += a[i];
	}
	return sum/10;
}