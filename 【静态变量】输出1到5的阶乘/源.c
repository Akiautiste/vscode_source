#include <stdio.h>
int fac(int n);
void main()
{
	int i;// 可以用register存到CPU寄存器
	for ( i = 1; i <=15; i++)
	{
		printf("%d!=%d\n",i,fac(i));
	}
}
int fac(int n)
{
	static int f = 1;
	f = f * n;
	return(f);
}

