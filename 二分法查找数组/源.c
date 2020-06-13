#include <stdio.h>
void main()
{
	int low=0, mid=0, high=9,f=1,key;
	int a[10] = { -12,0,6,16,23,56,80,100,110,115 };  //一个程序在编译运行的时候，普通变量是存放在栈区
	printf("input a number:\n");                      //我们还会学习堆，而static会使得变量存放在DATA         
	scanf_s("%d", &key);                              //内存分为四大区：CODE,DATA,STACK,HEAP
	while (low<=high)
	{
		mid = (low + high) / 2;
		if (a[mid] == key)
		{
			printf("Find %d !\n",key);
			f = 0;
			break;
		}
		else if(a[mid]<key)
		{
			low = mid + 1;
		}
		else
	{
	high = mid - 1;
	}

	}
	if(f)
	printf("Cannot find %d\n",key);
}