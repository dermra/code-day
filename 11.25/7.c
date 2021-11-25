#include <stdio.h>
//完数的判断
int main()
{
    int a, b = 0, i, j;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        b = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                b += j;
            }
        }
        if (i == b)
        {
            printf("%d - ", i);
            for (j = 1; j < i; j++)
            {
                if (i % j == 0)
                {
                    printf("%d ", j);
                }
            }

            printf("\n");
        }
    }
    return 0;
}