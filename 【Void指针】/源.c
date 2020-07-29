#include <stdio.h>
#if 0
int main()
{
	int num = 1024;
	int* pi = &num;
	char* ps = "fishC";
	void* pv;

	pv = pi;
	printf("pi:%p,pv:%p\n", pi, pv);
	printf("*pv:%d\n", *(int *)pv);

	ps = (char*)pv;

	pv = ps;
	printf("ps:%p,pv:%p\n", ps, pv);
	printf("*pv:%s\n", (char *)pv);
}
#endif

#if 1
int main()
{
	int a = 10;
	int* p1=&a;
	int* p2 = NULL;

	printf("%d\n", *p1);
	printf("%d\n", p2);
}
#endif