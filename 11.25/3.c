#include <stdio.h>
//2020互质数
int main()
{
    int i, j, a, b = 0;
    for (i = 1; i <= 2020; i++)
    {
        a = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0 && 2020 % j == 0)
            {
                a++;
            }
        }
        if (a == 1)
        {
            b++;
        }
    }
    printf("%d", b);
    return 0;
}