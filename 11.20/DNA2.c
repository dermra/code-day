#include <stdio.h>
int main()
{
    int a, b[10], c[10];
    int i, j, k, l;
    scanf("%d", &a);
    for (l = 0; l < a; l++)
    {
        scanf("%d", &b[l]);
        scanf("%d", &c[l]);
    }
    for (l = 0; l <= a; l++)
    {
        for (k = 1; k <= c[l]; k++)
        {
            for (i = 1; i <= b[l]; i++)
            {

                for (j = 1; j <= b[l]; j++)
                {
                    if (k != c[l])
                    {
                        if ((i == j || i + j == b[l] + 1) && i != b[l])
                        {
                            printf("X");
                        }
                        else if (i != b[l])
                        {
                            printf(" ");
                        }
                    }
                    else
                    {
                        if ((i == j || i + j == b[l] + 1))
                        {
                            printf("X");
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                }
                if (i != b[l])
                {
                    printf("\n");
                }
            }
        }
        if (l != a)
        {
            printf("\n");
            printf("\n");
        }
        else
        {
            return 0;
        }
    }
    return 0;
}