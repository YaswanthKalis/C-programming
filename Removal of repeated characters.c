#include <stdio.h>
#include <string.h>
int main()
{
    int i, j = 0;
    char str[100];
    int freq[256] = {0};

    fgets(str, sizeof(str), stdin);
    int len = strlen(str);

    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        if (freq[(int)str[i]] == 0)
        {
            freq[(int)str[i]] = 1;
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("%s", str);
    return 0;
}
