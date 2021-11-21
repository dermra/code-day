#include <stdio.h>
int main()
{
    int a, i, j = 1;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
        {
            printf("%5d", j * i);
        }
        printf("\n");
    }
}