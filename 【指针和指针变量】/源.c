#include <stdio.h>
int main()
{
	char a = 'f';
	int f = 132;
	
	char* pa = &a;
	int* pb = &f;
	printf("%c\n", *pa);
	printf("%d\n", *pb);
	
	
	*pa = 'C';
	*pb += 1;
	printf("%c\n", *pa);
	printf("%d\n", *pb);
	printf("sizeof pa= %d\n", sizeof(pa));
	printf("sizeof pa=%d\n", sizeof(pb));

	printf("the addr of a is: %p\n", pa);
	printf("the addr of b is :%p\n", pb);
	return 0;
}