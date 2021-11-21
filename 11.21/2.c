#include <stdio.h>
/*
                 1
              1  2  1
           1  2  3  2  1
        1  2  3  4  3  2  1
     1  2  3  4  5  4  3  2  1
  1  2  3  4  5  6  5  4  3  2  1
     1  2  3  4  5  4  3  2  1
        1  2  3  4  3  2  1
           1  2  3  2  1
              1  2  1
                 1
*/
int main()
{
    int a;
    int i, j;
    scanf("%d", &a);
    for (i = 0; i < a / 2 + 1; i++)
    {
        for (j = 0; j < a / 2 + 1; j++)
        {
            if (i + j < a / 2 + 1)
            {
                printf(" ");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
}