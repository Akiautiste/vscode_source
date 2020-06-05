#include <stdio.h>
void main()
{
    int i=8;
    printf("%d\n",++i);
    printf("%d\n",--i);
    printf("%d\n",i++);
    printf("%d\n",i--);
    printf("%d\n",-i++);      //右结合性
    printf("%d\n",-i--);
    getchar();

}