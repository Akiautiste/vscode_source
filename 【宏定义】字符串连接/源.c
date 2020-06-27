#include <stdio.h>
#include <string.h>
#define STR(s1,s2,s3,sum) strcat_s(strcat_s(strcat_s(sum,40,s1),30,s2),2.,s3)
void main()
{
	char str1[] = "I", str2[] = "love", str3[] = "Fishc.com!", str[40] = "";
	STR(str1, str2, str3, str);
	printf("\n\tstr1= %s\n\tstr2=%s\n\tstr3=%s\n\tstr=%s\n\n\n", str1, str2, str3, str);

}
