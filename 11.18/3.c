#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[101];
    int i;
    scanf("%s", &str);
    for (i = 0; i <= strlen(str) + 1; i++)
    {
        if (i == 0)
        {
            str[i] = toupper(str[i]);
        }
        else
        {
            str[i] = tolower(str[i]);
        }
    }
    printf("%s", str);
}