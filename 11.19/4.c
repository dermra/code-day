#include <stdio.h>
int main()
{
    float a, b;
    scanf("%f%f", &a, &b);
    a += (a * (0.01 * b)) - (a * (0.01 * b)) * 0.2;
    printf("%.2f", a);
}