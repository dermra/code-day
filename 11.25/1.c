#include <stdio.h>
int main()
{
    int i, j, a, b = 0;
    for (i = 1; i <= 2020; i++)
    {

        a = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                a++;
            }
        }
        if (a != 0)
        {
            b++;
        }
    }
    printf("%d", b);
}