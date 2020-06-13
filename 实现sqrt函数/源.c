#include <stdio.h>

double sqrt(double question);
int main(void)
{
    double question = 48, answer;
    answer = sqrt(question);
    if (question < 0)
        printf("Error: sqrt returns %f\n", answer);
    else
        printf("The square root of %.2f is %.2f\n", question, answer);
}

double sqrt(double question)
{
    double temp=question/2;
    while (1)
    {
        if (temp * temp == question)

            return temp;
        else
        {
            temp = temp - 1;
        }
    }
}
