#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{	
	char str1[]="To be or not to be";
	char str2[40];
	strncpy(str2,str1,5);

	printf("str2:%s\n",str2);
    system("pause");

}