#include <stdio.h>
//菱形
//   *
//  * *
// *   *
//  * *
//   *
int main()
{
    int a, i, j, a2;
    scanf("%d", &a);
    for (i = 1; i <= a * 2 - 1; i++)
    {
        for (j = a; j <= a * 2 - 1; j++)
        {
            if (i + j == a * 2 || i == j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (j = a * 2 - 2; j >= a; j--)
        {
            if (i + j == a * 2 || i == j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}