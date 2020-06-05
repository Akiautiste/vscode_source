#include <stdio.h>
void main()
{
    int i=8;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n",i,++i,++i,i++,i--,-i++,-i--);  //从右往左计算，运算符在后面的不计算
    getchar();

}