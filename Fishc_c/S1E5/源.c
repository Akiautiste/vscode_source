#include <stdio.h>
#include <math.h>
#define S(r) PI*r*r
#define C(r) 2*PI*r
#define  PI acos(-1)
#if 1
int main()
{
    int r;
    printf("������뾶:\n");
    scanf("%d", &r);
    printf("Բ�������:%f\n", S(r));
    printf("Բ���ܳ���:%f\n", C(r));

    return 0;
}
#endif