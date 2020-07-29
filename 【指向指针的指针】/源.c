#include <stdio.h>
#if 0
int main()
{
	int num = 520;
	int* p = &num;
	int** pp = &p;

	printf("num: %d\n", num);
	printf("*p:%d\n", *p);
	printf("**p:%d\n", **pp);
	printf("&p:%p,pp:%p\n", &p, pp);
	printf("&num:%p,p:%p,*pp:%p\n", &num, p, *pp);
	return 0;
}
#endif

#if 0
int main()
{
	char* cBooks[] = {          //cBooks为指针数组，元素都是指向字符型的指针
			"{C程序设计语言}",
			"{C专家编程}",
			"{C陷阱和缺陷}",
			"{C Primer Plus}",
			"{带你学C带你飞}"
	};

	char** byFishC;
	char** jiayuloves[4];  //指向指针数组的指针
	int i;

	byFishC = &cBooks[4];
	jiayuloves[0] = &cBooks[0];
	jiayuloves[1] = &cBooks[1];
	jiayuloves[2] = &cBooks[2];
	jiayuloves[3] = &cBooks[3];

	printf("FishC出版的书:%s\n", *byFishC);
	printf("甲鱼喜欢的书:\n");

	for ( i = 0; i < 4; i++)
	{
		printf("%s\n", *jiayuloves[i]);
	}


}
#endif

#if 1
int main()
{
	int array[3][4] = { {0,1,2,3},
	                    {4,5,6,7},
		                {8,9,10,11} };
	//int** p = array;
	int(*p)[4] = array;
	int i,j;
	
//	printf("%2d ", *(array + j));
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			printf("%2d ", *(*(p + i)+j));

		}
		printf("\n");

		
	}
	
	
	return 0;
}
#endif
