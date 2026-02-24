#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, pos = -1;
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
        if (str[i] != ch)
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("%s", str);
    return 0;
}
