#include <stdio.h>
int main()
{
    int i, b;
    double a[101];
    scanf("%d", &b);
    a[0] = 0;
    a[1] = 1;
    for (i = 2; i < 100; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    // for (i = 0; i <= 100; i++)
    // {
    //     printf("%.0lf\n", a[i]);
    // }
    long long ll = a[b];
    printf("%d", (ll % 2));
}