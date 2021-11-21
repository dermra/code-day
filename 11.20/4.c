#include <stdio.h>
int main()
{
    //5004: 入门训练 冒泡排序
    int a[30] = {0}, b, temp;
    int i, j;
    //输入
    scanf("%d", &b);
    for (i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    //排序
    for (i = 0; i < b; i++)
    {

        for (j = 0; j < b; j++)
        {

            if (a[j] > a[j + 1])
            {

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    //输出
    int flag;
    scanf("%d", &flag);
    if (flag == 1)
    {
        for (i = b; i > 0; i--)
        {
            printf("%d ", a[i]);
        }
    }
    if (flag == 0)
    {
        for (i = 1; i <= b; i++)
        {
            printf("%d ", a[i]);
        }
    }
}