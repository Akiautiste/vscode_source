#include <stdio.h>
void main()
{
    int a=2,b=4,c=6,x,y;
    y=(x=a+b,b+c); //逗号表达式：(表达式1，表达式2) 结果取表达式2
    printf("y=%d,x=%d",y,x);
    getchar();


}