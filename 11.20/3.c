#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N); //总的测试实例
    while (N--)
    {
        int a, b, i, j, l;
        scanf("%d %d", &a, &b);
        char c[40][40];          //定义字符串。
        for (i = 1; i <= a; i++) //a代表行列数，b代表重复次数
            for (j = 1; j <= a; j++)
            {
                if (i == j || i + j == a + 1) //给字符串赋值 根据排列图中排列的规律
                    c[i][j] = 'X';
                else
                    c[i][j] = ' ';
            }
        for (i = 1; i <= a; i++) //首先输出第一个完整的X排列
        {
            int flag = 0; //用标志符号控制是否输出每一行的最后一个X，注意有一行只有一个X
            for (j = 1; j <= a; j++)
            {
                if (c[i][j] == 'X')
                {
                    printf("%c", c[i][j]);
                    flag++;
                    if (i != (a + 1) / 2 && flag == 2) //输出最后X后要退出，
                        break;
                    if (i == (a + 1) / 2 && flag == 1)
                        break;
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
        for (l = 2; l <= b; l++) //下边的输出为数组去掉第一行。
        {
            for (i = 2; i <= a; i++)
            {
                int flag = 0;
                for (j = 1; j <= a; j++)
                {
                    if (c[i][j] == 'X')
                    {
                        printf("%c", c[i][j]);
                        flag++;
                        if (i != (a + 1) / 2 && flag == 2)
                            break;
                        if (i == (a + 1) / 2 && flag == 1)
                            break;
                    }
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
        printf("\n"); //最后输出结束后输出空行。
    }
    return 0;
}