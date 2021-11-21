#include <stdio.h>
int main()
{
    int i, b = 0;
    for (i = 1; i <= 2020; i++)
    {
        if ((i % 4 == 0) && (i % 6 == 0))
        {
            b++;
        }
    }
    printf("%d", b);
}