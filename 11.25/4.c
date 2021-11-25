#include <stdio.h>
#include <string.h>
//倒序输出
int main()
{
    char str[30];
    int i;
    scanf("%s", &str);
    for (i = strlen(str); i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}
