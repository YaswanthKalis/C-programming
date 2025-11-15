#include <stdio.h>
#include <math.h>

int main()
{
    int orgn, m, lastDigit, digits, sum;
    scanf("%d", &n);

    sum = 0;
    orgn = n;
    digits = (int) log10(n) + 1;

    while(n > 0)
    {
        lastDigit = n % 10;
        sum += round(pow(lastDigit, digits));
        n = n / 10;
    }

    if(orgn == sum)
    {
        printf("%d is ARMSTRONG NUMBER", orgn);
    }
    else
    {
        printf("%d is NOT ARMSTRONG NUMBER", orgn);
    }

    return 0;
}
