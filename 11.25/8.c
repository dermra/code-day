#include <stdio.h>
//                  1
//               1  2  1
//            1  2  3  2  1
//         1  2  3  4  3  2  1
//      1  2  3  4  5  4  3  2  1
//   1  2  3  4  5  6  5  4  3  2  1
//      1  2  3  4  5  4  3  2  1
//         1  2  3  4  3  2  1
//            1  2  3  2  1
//               1  2  1
//                  1
int main()
{
    int a, i, j;
    int jj[100] = {1};
    int ii[100] = {1};
    scanf("%d", &a);
    for (i = 1; i <= a / 2 + 1; i++)
    {
        for (j = 1; j <= a / 2 + 1; j++)
        {
            if (i + j >= a / 2 + 2)
            {
                jj[j]++;
                printf("%3d", jj[j]);
            }
            else
            {
                printf("   ");
            }
        }
        for (j = a / 2; j >= 1; j--)
        {
            if (i + j >= a / 2 + 2)
            {
                jj[j + 10]++;
                printf("%3d", jj[j + 10]);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    for (i = a / 2; i >= 1; i--)
    {
        for (j = 1; j <= a / 2 + 1; j++)
        {
            if (i + j >= a / 2 + 2)
            {
                jj[j]--;
                printf("%3d", jj[j]);
            }
            else
            {
                printf("   ");
            }
        }
        for (j = a / 2; j >= 1; j--)
        {
            if (i + j >= a / 2 + 2)
            {
                jj[j + 10]--;
                printf("%3d", jj[j + 10]);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}