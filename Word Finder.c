#include <stdio.h>
#include <string.h>
int main()
{

    int i, j, n, found;
    char str[100], wrd[50], ch;

    fgets(str, 100, stdin);
    fgets(wrd, 50, stdin);

    str[strcspn(str, "\n")] = '\0';
    wrd[strcspn(wrd, "\n")] = '\0';

    n = strlen(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        found = 1;
        for (j = 0; wrd[j] != '\0'; j++)
        {
            if (str[i + j] != wrd[j])
            {
                found = 0;
                break;
            }
        }
        if (found)
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("NF");
    return 0;
}
