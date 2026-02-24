#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int i, pos = -1;
    char str[100], ch;

    fgets(str, sizeof(str), stdin);
    scanf("%c", &ch);

    int len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            pos = i;
            break; // remove this to find the last occurence
        }
    }

    if (pos != -1)
    {
        for (i = pos; i < len; i++)
        {
            str[i] = str[i + 1];
        }
    }
    printf("%s", str);
    return 0;
}
