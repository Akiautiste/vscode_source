#include <stdio.h>
#include <conio.h>
int main()
{
	int word=0, space=0, num=0, others=0;
	int a;
	while ((a=getchar())!= '\n')
	{
		if(48<=a<=57)
			num += 1;
		else if (65 <=a<= 90 || 97 <= a<= 122)
			word += 1;
		else if (a == 32)
			space += 1;
		else
		{
			others += 1;
		}
	

	}
	printf("������%d�����֣�%d����ĸ,%d���ո�%d�����ַ�", num, word, space, others);
}