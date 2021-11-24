#include <stdio.h>
int main()
{
    double i, a = 1;
    for (i = 2; i <= 100; i++)
    {
        a *= i;
        printf("%.0lf\n", a);
    }
}
