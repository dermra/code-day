#include <stdio.h>
int main()
{
    int b, c, i, j, k;
    int a;
    scanf("%d", &a);
    while (a--)
    {
        scanf("%d%d", &b, &c);
        for (k = 1; k <= c; k++)
        {
            if (k == 1)
            {
                for (i = 1; i <= b; i++)
                {
                    for (j = 1; j <= b; j++)
                    {
                        if (i == j || i + j == b + 1)
                        {
                            printf("X");
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
            }
            else
            {
                for (i = 2; i <= b; i++)
                {
                    for (j = 1; j <= b; j++)
                    {
                        if (i == j || i + j == b + 1)
                        {
                            printf("X");
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
            }
        }
        printf("\n");
    }
}