1、求递归方法求N！
#include <stdio.h>
long recursion(int n);
void main()
{
    int n;
    long result;
    printf("input a integer number:\n");
    scanf("%d", &n);
    result = recursion(n);
    printf("%d!=%ld\n", n, result);
}
long recursion(int n)
{
    long temp_result;
    if (n < 0)
    {
        printf("n<0,input error!\n");
    }
    else if (n == 0 || n == 1)
    {
        temp_result = 1;
    }
    else
    {
        temp_result = recursion(n - 1) * n;
    }
    return temp_result;
}






2、从键盘任意输入10个整数，要求编程从小到大将他们输出。

#include <stdio.h>
void main()
{   int a[10], i, j, temp;
    for (i = 0; i < 10; i++)
    {
        printf("input No.%d numbers:\n",i+1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 9; i++)
    {
        for (j =0;j < 9-i;j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
 
3、输出100到200间的全部素数，并且每行只输出10个素数。
#include <stdio.h>
void main()
{   int  j,i,f=0;
    for (j = 100; j <= 200;j++)
    {
        for (i = 2; i < j; i++)
        {
            if (j% i == 0)
            {
                break;
            }
        }
        if (i >= j)
        {
            if (f<9)
            {
            printf("%d ",j);
            f++;
            }
            else
            {
            printf("%d\n",j);
            f=0;
            }
        }
    }
}








4、选修某课程的学生有10人，编程统计该课程期末考试的平均分、最高分和最低分。
#include <stdio.h>
void main()
{
    int i, j, a[10], sum = 0, temp;
    float avg, max, min;
    for (i = 0; i < 10; i++)
    {
        printf("input no.%d student score:\n", i + 1);
        scanf("%d", &a[i]);
        sum = +a[i];
    }
    avg = sum / 10;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Average score is ：%d %f\n", sum, avg);
    printf("Max score is ：%d\n", a[9]);
    printf("Min score is ：%d\n", a[0]);
}
 
5、编程输出Fibonacci数列：1，1，2，    3，5，8，13，21…的前40项。
{█(F_1=1                     (n=1)@F_2=1                     (n=2)@F_3=F_(n-1)+F_(n-2)  (n≥3))┤
#include <stdio.h>
void main()
{
    int a[20] = { 1,1 }, i;
    for (i = 0; i < 20; i++)
    {
        
        if (i >= 2)
            a[i] = a[i - 1] + a[i - 2];
        printf("%d\n", a[i]);

    }
}

6、采用某种排序算法，从键盘任意输入10个整数，要求编程从小到大将他们排序输出。
#include <stdio.h>
int main()
{
	int a[10], i, j, temp;
	for (i = 0; i < 10; i++)
	{
		printf("input No.%d numbers:\n", i + 1);
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
}
7、从键盘上输入两个正整数m和n，编程求其最大公约数和最小公倍数。
#include<stdio.h>
int main()
{
    int a, b, t, r;
    printf("请输入两个数字：\n");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        t = b;
        b = a;
        a = t;
    }
    r = a % b;
    int n = a * b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    printf("这两个数的最大公约数为%d,最小公倍数为%d\n", b, n / b);
    return 0;
}
8、编写程序从键盘输入10个整数，计算并输出这10个数的平均数
#include <stdio.h>
void main()
{
    int i, j, a[10], sum = 0;
    float avg;
    for (i = 0; i < 10; i++)
    {
        printf("input no.%d student score:\n", i + 1);
        scanf("%d", &a[i]);
        sum = +a[i];
    }
    avg = sum / 10;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

printf("Average score is : %f\n",avg);
}

9、如果0<n<8，计算s=1!+2!+……..+n!，并打印输出计算结果s。

#include <stdio.h>
int main()
{
    int i,j,sum=0;
    double fac = 1;
   // scanf_s("%d", &n);
    for ( i = 1; i < 9; i++)
    {
        for (j = 1; j <= i ; j++)
        {
            fac = fac * j;
            
        }
        sum = sum + fac;
       
        printf("当n=%d时，s=%d",i,sum);
        printf("\n");

        fac = 1;
    }
   
    return 0;
} 
