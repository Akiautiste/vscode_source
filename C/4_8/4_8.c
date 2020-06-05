#include <stdio.h>
void main()
{
    char a,b;
    printf("input character a,b\n");
    scanf("%c%c",&a,&b);    //空格也是一种字符
    printf("%c%c\n",a,b);
    getchar();
}