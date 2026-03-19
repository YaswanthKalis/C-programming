#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
        int n, i, j;
        char s[100];

        fgets(s, 100, stdin);
        s[strcspn(s, "\n")] = '\0';
        scanf("%d", &j);

        n=strlen(s);
        j=j%n;

        for (i=j;i<n;i++)  // (i=n-j;i<n;i++) for right rotatation
        {
                printf("%c",s[i]);
        }
        for (i=0;i<j;i++)  // (i=0;i<n-j;i++) for right rotation
        {
                printf("%c",s[i]);
        }
        return 0;
}
