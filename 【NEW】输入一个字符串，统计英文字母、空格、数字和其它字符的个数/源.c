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
	printf("输入了%d个数字，%d个字母,%d个空格，%d其他字符", num, word, space, others);
}