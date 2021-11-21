#include <stdio.h>
int main()
{
    int i, a, b = 1, c = 0;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        b = b * i;
        c += b;
    }
    printf("%d", c);
}