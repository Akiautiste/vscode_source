#include <stdio.h>
void main()
{
	float f, p=20, w, s, d;
	printf("输入货物重量w(kg):,距离s(km)\n");
	scanf_s("%f %f", &w, &s);
	if (s < 250)
		printf("总运费为:%f\n", p * w * s);
	else if (s < 500)
		printf("总运费为:%f\n", p * w * s*(1-0.02));
	else if (s < 1000)
		printf("总运费为:%f\n", p * w * s * (1 - 0.05));
	else if (s < 2000)
		printf("总运费为:%f\n", p * w * s * (1 - 0.08));
	else if (s < 3000)
		printf("总运费为:%f\n", p * w * s * (1 - 0.1));
	else 
		printf("总运费为:%f\n", p * w * s * (1 - 0.15));
}

/*void mian()
{ 
    int c,s;
	float p, w, d, f;
	scanf_s("%f,%f,%d", &p, &w, &s);
	if (s >= 3000)
	{
		c = 12;
	}
	else
	{
		c = s / 250;

	}
	switch (c)
	{
	case 0:
		d = 0;
		break;
	case 1:
		d = 2;
		break;
	case 2:
	case 3:
		d = 5;
		break;
	case 4:
	case 5:
	case 6:
	case 7:
		d = 8;
		break;
	case 8:
	case 9:
	case 10:
	case 11:
		d = 10;
		break;
	case 12:
		d = 15;
	}
	f = p * w * s(1 - d / 100.0);
	printf("freight=%15.4f",f)
}
*/