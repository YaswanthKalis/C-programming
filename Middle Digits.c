#include <stdio.h>
int main()
{
    int n, first, last, sum = 0;
    scanf("%d", &n);

    last = n % 10;   
    n = n / 10;      

    while (n >= 10)  
    {
        sum += n % 10;
        n = n / 10;
    }
    printf("%d", sum);

    return 0;
}
