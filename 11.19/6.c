
#include <stdio.h>
int main()
{
    int i, a, b, c, d, e, n = 0;
    for (i = 1; i <= 10000; i++)
    {
        a = (i * i * i) % 10;
        b = (i * i * i) % 100;
        c = (i * i * i) % 1000;
        d = (i * i * i) % 10000;
        e = (i * i * i) % 100000;
        if (((a == i) || (b == i)) || ((c == i) || (d == i)) || e == i)
        {
            n++;
            printf("%d ", i);
        }
    }
    printf("%d", n);
}