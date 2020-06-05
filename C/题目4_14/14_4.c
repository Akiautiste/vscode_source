#include <stdio.h>
#include <math.h>
 void main()
{
    double a,b,c,s,area;
    printf("input the length of triangle:");
    scanf_s("%lf %lf %lf",&a,&b,&c);
    s=1.0/2*(a+b+c);  //浮点型和整型运算会得到浮点型
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area=%lf",area);
  

}