#include <stdio.h>
int square(int x);
int factorial(int y);
void main()
{
	int a,b,s,f;
	printf("intput number1:");
	scanf_s("%d", &a);
	printf("intput number2:");
	scanf_s("%d", &b);
	s = factorial(square(a));
	f= factorial(square(b));
	printf("s=%d", s+f);
}

int square(int x)
{
return  x*x;	
}
int factorial(int y)
{
	int j,r=1;
	
	
		for (j = y; j > 1; j--)
		{
			r *= j;
		}
	
	return r;
}
//Ç¶Ì×
#if 0
long square(int p);
long factorial(int q);

void main()
{
	int i;
	long s = 0;
	for ( i = 0; i < 3; i++)
	{
		s = s + square(i);
	}
	printf("%ld\n", s);
}
long square(int p)
{
	int k;
	long r;
	long factorial(int);
	k = p * p;
	r = factorial(k);
	return r;
}
long factorial(int q)
{
	long c = 1;
	int i;
	for ( i = 1; i<=q; i++)
	{
		c *= i;
	}
	return c;
}
#endif