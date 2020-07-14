#include <stdio.h>
#if 0
int main()
{
	int a;
	int* p = &a;

	printf("输入一个整数:\n");
	scanf("%d", &a);
	printf("a=%d\n", a);

	printf("输入一个整数:\n");
	scanf("%d", p);
	printf("a=%d\n", *p);
	return 0;
}
#endif
#if 0
int main()
{
	char  str[128];
	printf("请输入什么呢：\n");
	scanf("%s", str);
	printf("您输入在这：%s\n", str);
	printf("%s", &str[0]);


	return 0;
}
#endif
#if 0
int main()
{
	char  a[6] = { 'a','b','c','d','e','f' };
	int b[] = { 1,3,5,7,9 };
	float c[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double d[5] = { 2,2,2,2,2 };
	printf("a[0]->%p,a[1]->%p,a[2]->%p\n", &a[0], &a[1], &a[2]);
	//a[5] = '\0';
	printf("%c\n,", a[0]);
	printf("b[0]->%p,b[1]->%p,b[2]->%p\n", &b[0], &b[1], &b[2]);
	printf("c[0]->%p,c[1]->%p,c[2]->%p\n", &c[0], &c[1], &c[2]);
	printf("d[0]->%p,d[1]->%p,d[2]->%p\n", &d[0], &d[1], &d[2]);


	return 0;

}
#endif
#if 1
int main()
{

	char  a[6] = { 'a','b','c','d','e','f' };
	int b[] = { 1,3,5,7,9 };
	float c[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double d[5] = { 2,2,2,2,2 };

	char* p = a;

}
#endif