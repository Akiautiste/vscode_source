#include <stdio.h>
#include <conio.h>
void main()
{
	int i = 0;
	char c;
	while (1)
	{
		c = '\0';
		while (c !=13 && c != 27)
		{
			c = _getch();
			printf("%c\n", c);


		}
		if (c == 27)
			break;
		i++;
		printf("The No. is %d\n", i);
	}
	printf("The end");

}


/*
void main()
{
	char ch;
	for (; ; )
	{
		ch = getch();
		if (ch == 27)
			break;
		if (ch == 13)
		{
			continue;
			putch(ch);
		}
	}
}
*/