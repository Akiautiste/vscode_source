#include <stdio.h>
#if 0
void main()
{
	int i = 1;
	int SQ(int y);
	while (i<=5)
	{
		printf("%d\n", SQ(i++));
	}
}
int SQ(int y)
{
	return((y) * (y));
}
#endif

#define SQ(y) ((y)*(y))
void main()
{
	int i = 1;
	while (i<=5)
	{
		printf("%d\n", SQ(i++));
	}
}