#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 20; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (((i * j) == ((i + j) * 6)) && (i - j) < 8 && i != j)
            {
                printf("%d\n", j);
            }
        }
    }
}