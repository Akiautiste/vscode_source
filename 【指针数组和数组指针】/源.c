#include <stdio.h>

#if 0
void main()
{
	int a = 1;
	int b = 2;
	int c = 4;
	int d = 5;
	int e = 6;
	int* p1[5] = {&a,&b,&c,&d,&e};
	int i;

	for ( i = 0; i < 5; i++)
	{
		printf("%p\n", *p1[i]);
	}
}
#endif
#if 0
void main()
{
	int i;
	char* p1[5] = {
		"ABC",
		"Hey hey",
		"Xi xi",
		"Lue lue",
		"Damn"
	};
	for ( i = 0; i < 5; i++)
	{
		printf("%s\n", p1[i]);
	}
}
#endif

#if 0
void main()
{
	int arr[5] = { 1,2,3,4,5 };
	int* p1;fatkun
	int(*p2)[5];
	p1 = arr;
	p2 = &arr;
	printf("%d\n", *p1);
	printf("%d\n", *(int*)p2);
	printf("%d\n", *(p1 + 1));
	printf("%d\n", *(int*)(p2 + 1));
}
#endif

#if 1
void main()
{
	int temp[5] = { 1,2,3,4,5 };
	int(*p2)[5] = &temp;
	int i;

	for ( i = 0; i < 5; i++)
	{
		printf("%d\n", *(*p2 + i));//*p2==temp;
	}
}
#endif