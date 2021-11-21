#include <stdio.h>
int main()
{
    int a = 0, numExchange, numBottles;
    scanf("%d", &numBottles);
    scanf("%d", &numExchange);
    a += numBottles;
    while (numBottles >= numExchange)
    {
        numBottles = numBottles - numExchange;
        a++;
        numBottles++;
    }
    printf("%d", a);
}