#include <stdio.h>
int main()
{
    int a, b, c = 0;
    while (scanf("%d", &a) != EOF)
    {
        c = 0;
        do
        {
            b = a % 10;
            c += b;
            a /= 10;
        } while (a != 0);
        printf("%d\n", c);
    }
}