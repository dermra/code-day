#include <stdio.h>
int main()
{
    int i, a, b, c, d, e, f, g, temp;
    for (i = 1000000; i <= 10000000; i++)
    {
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100 % 10;
        d = i / 1000 % 10;
        e = i / 10000 % 10;
        f = i / 100000 % 10;
        g = i / 1000000 % 10;
        e = i / 10000000 % 10;
        temp = a + b + c + d + e + f + g;
        if (
            (d * 10000000 + d * 1000000 + d * 100000 + d * 10000 + d * 1000 + d * 100 + d * 10 + d) ==
            (a +
             (b * 10 + a) +
             (c * 100 + (b * 10 + a)) +
             (d * 1000 + (c * 100 + (b * 10 + a))) +
             (e * 10000 + (d * 1000 + (c * 100 + (b * 10 + a)))) +
             (f * 100000 + (e * 10000 + (d * 1000 + (c * 100 + (b * 10 + a))))) +
             (g * 1000000 + (f * 100000 + (e * 10000 + (d * 1000 + (c * 100 + (b * 10 + a)))))) +
             (e * 10000000 + (g * 1000000 + (f * 100000 + (e * 10000 + (d * 1000 + (c * 100 + (b * 10 + a)))))))))
        {
            printf("%d", i);
        }
    }
}