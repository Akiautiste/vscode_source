#include <stdio.h>
void main()
{
	double score[][4] = {{60.0,70.0,80.5,90.5},
						 {56.0,89.0,67.0,88.0},
						 {34.2,54.6,45.4,56.8},
						 {66.2,64.6,78.8,80.0}
	};
	double* search( double(*pointer)[4],int n );
	double* p;
	int i, m,f=0;
	printf("Please enter the number of student:");
	scanf_s("%d", &m);
	printf("The scores of No.%d are:\n", m);
	p = search(score, m);

	for ( i = 0; i < 4; i++)
	{
		printf("%5.2f\t", *(p + i));
		if (*(p + i) < 60)
		{
			f = 1;
		}
	}
	printf("\n\n\n");
	if(f)
	printf("The student NOT perfect\n");
	else
	printf("The student is PERFECT !\n");
	

}
double *search(double(*pointer)[4], int n)
{
	double* pt;
	pt = *(pointer + n);
	return pt;
}