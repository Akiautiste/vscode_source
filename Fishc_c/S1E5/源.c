#include <stdio.h>
#include <math.h>
#define S(r) PI*r*r
#define C(r) 2*PI*r
#define  PI acos(-1)
#if 1
int main()
{
    int r;
    printf("请输入半径:\n");
    scanf("%d", &r);
    printf("圆的面积是:%f\n", S(r));
    printf("圆的周长是:%f\n", C(r));

    return 0;
}
#endif