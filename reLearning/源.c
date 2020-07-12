#include <stdio.h>
#include <math.h>
void main()
{
	printf("int =%d\n",sizeof(int));
	printf("short int =%d\n",sizeof(short));
	printf("long int =%d\n", sizeof(long));
	printf("long long int =%d\n", sizeof(long long));
	printf("char =%d\n", sizeof(char));
	printf("_Bool =%d\n", sizeof(_Bool));
	printf("float =%\n", sizeof(float));
	printf("double =%d\n", sizeof(double));
	printf("long double =%d\n", sizeof(long double));
	short int i = 32767;
	printf("%d\n", i);

	return 0;

}