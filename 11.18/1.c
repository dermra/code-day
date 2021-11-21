#include <stdio.h>
//5092 正约数
int main()
{
    int a;
    scanf("%d", &a);
    int i, j = 0;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            j++;
        }
    }
    printf("%d", j);
}