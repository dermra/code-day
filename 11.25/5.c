#include <stdio.h>
//明明的随机数
int main()
{
    int a, i, b[150], c[1001] = {0}, j;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
        for (j = 1; j <= 1000; j++)
        {
            if (b[i] == j)
            {
                c[j]++;
            }
        }
    }
    j = 0;
    for (i = 1; i <= 1000; i++)
    {
        if (c[i] >= 1)
        {
            j++;
            //printf("%d ", i);
        }
    }
    printf("%d\n", j);
    for (i = 1; i <= 1000; i++)
    {
        if (c[i] >= 1)
        {
            printf("%d ", i);
        }
    }
}