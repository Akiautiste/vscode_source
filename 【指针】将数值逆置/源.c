#include <stdio.h>
void main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int reverse(int a[]);
	reverse(a);
}

int reverse(int a[])
{
	int b[10],*p=a,i;
	for ( i = 0; i < 10; i++)
	{
		b[9-i] = *(p + i);
	}
	for ( i = 0; i < 10; i++)
	{
		printf("%d", b[i]);
	}
	
}
#if 0
void reverse(int x[], int n)  //原地逆置（数组名做参数） 
{
	int temp, i, j, m;
	m = (n - 1) / 2;
	for ( i = 0; i < =m; i++)
	{
		j = n - 1 - i;
		temp = x[i];
		x[i] = x[j];
		x[j] = temp;

	}
}
#endif
#if 0
void reverse(int *x, int n)  //原地逆置（指针变量做参数） 
{
	int* p, temp, * i, * j, m;
	m = (n - 1) / 2;
	i = x;
	j = x + n - 1;
	p = x + m;
	for ( i = 0; i < =p; i--)
	{
		temp = *i;
		*i = *j;
		*j = temp;


	}

}
#endif