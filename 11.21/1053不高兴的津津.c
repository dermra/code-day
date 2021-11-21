#include <stdio.h>
int main()
{
    int i;
    int a[10], b[10];
    for (i = 1; i <= 7; i++)
    {
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
    }
    for (i = 1; i <= 7; i++)
    {
        if (a[i] + b[i] > 8)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}