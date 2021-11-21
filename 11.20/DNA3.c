#include <stdio.h>
int main()
{
    int i, j, k, t;
    int a[30], b[30];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d", &a[i], &b[i]);
    }
    for (i = 0; i < t; i++)
    {
        if (a[i] % 2 != 0 && a[i] >= 3 && a[i] <= 39 && b[i] >= 1 && b[i] <= 20)
        {
            while (b[i] >= 1)
            {
                if (b[i] > 1)
                {
                    for (j = 1; j < a[i]; j++)
                    {
                        for (k = 1; k <= a[i]; k++)
                        {
                            if (j + k == a[i] + 1 || j == k)
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
                    for (j = 1; j <= a[i]; j++)
                    {
                        for (k = 1; k <= a[i]; k++)
                        {
                            if (j == k || j + k == a[i] + 1)
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
                b[i]--;
            }
        }
        printf("\n");
    }
    return 0;
}