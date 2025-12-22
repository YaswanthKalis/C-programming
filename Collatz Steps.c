#include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int t=n;

    while(t!=1)
{
        if(t%2!=0)
         {
            t=t*3+1;
         }
         else
         {
            t=t/2;
         }
        count++;
    
}
            
             printf("%d",count);

    return 0;
}
