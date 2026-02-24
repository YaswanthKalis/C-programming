#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int i, count = 0, pos = -1;
    char str[100], ch;
    int max = 0, min = INT_MAX;
    char freq[256] = {0};

    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }

    char maxchar; // to return highest frequency character
    for (i = 0; i < 256; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            maxchar = i;
        }
    }
    printf("%c occurs %d times", maxchar, max);

    char minchar; // to return highest frequency character
    for (i = 0; i < 256; i++)
    {
        if (freq[i] < min)
        {
            min = freq[i];
            minchar = i;
        }
    }
    printf("%c occurs %d times", minchar, min);

    return 0;
}
