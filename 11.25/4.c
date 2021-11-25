#include <stdio.h>
#include <string.h>
//倒序输出
int main()
{
    char str[30];
    int i;
    gets(str);
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}
