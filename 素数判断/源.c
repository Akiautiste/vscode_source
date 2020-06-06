#include <stdio.h>
void main()
{
	int n,i;
	printf("input a number:\n");
	scanf_s("%d", &n);
	for (i = 2; i < n; i++)
	{
		
		if (n % i == 0 )
		{
			
			break;
		}	
		
	}
	if(i<n)
	printf("no\n");
	else
	{
		printf("yes\n");
	}
}

/*
void main()
{
    int m,i,k;
	scanf("%d",&m);k=sqrt(m);
	for(i=2;i<=k;i++)
	{
	    if(m%i==0)
		{
		   break;
		}
	}
	if(i>k)
	{
	  printf("%d is a prime number\n",m);

	}
	else
	{
	  printf("%d is not a prime number\n",m);

	}
}*/

void main()//100~200ÄÚµÄËØÊı
{
	int  j,i;
	for (j = 100; j <= 200;j++)
	{
		for (i = 2; i < j; i++)
		{

			if (j% i == 0)
			{

				break;
			}

		}
		if (i >= j)
			printf("%d\n",j);
		
	}
}