#include <stdio.h>
//字符距离错误答案
int main()
{

    char str2[7] = "LANQIAO";
    char str[7] = "LANQIAO";
    char min, max;
    int i;
    min = str[0];
    max = str[0];
    for (i = 1; i < 7; i++)
    {
        if (min > str[i])
        {
            min = str[i];
        }
        if (max < str[i])
        {
            max = str[i];
        }
    }
    printf("%d\n", max - min);
    return 0;
}