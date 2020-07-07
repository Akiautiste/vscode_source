#include <stdio.h>
#if 0
void main()
{
	enum weekday
	{
		sun,mon,tue,wed,thu,fri,sat	

	}a,b,c;

	a = sun;  //²»¿É¸³Öµ
	b = mon;
	c = tue;

	printf("%d,%d,%d", a, b, c);
	printf("\n\n");
}
#endif
void main()
{
	enum boy
	{
		Tom, Danny, Gan, LiLei
	}month[31], j;
	int i;

	j = Tom;
	for (i = 0; i < 30; i++)
	{
		month[i] = j;
		j++;
		if (j > LiLei)
		{
			j = Tom;
		}
	}

	for (i = 0; i < 30; i++)
	{
		switch (month[i])
		{
		case Tom:printf("%4d %s\t", i, "Tom");
			break;
		case Danny:printf("%4d %s\n", i, "Danny");
			break;
		case Gan:printf("%4d %s\t", i, "Gan");
			break;
		case LiLei:printf("%4d %s\t", i, "LiLei");
			break;
		default:
			break;
		}
	}

	printf("\n");
}
