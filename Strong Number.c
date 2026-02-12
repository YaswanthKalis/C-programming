
#include <stdio.h>
int main()
{
   int n,i,j,sum=0,fact=1;
   scanf("%d",&n);
   int temp=n;
   
   while(temp>0)
   {
       j=temp%10;
       fact=1;
       for(i=1;i<=j;i++)
       {
           fact=fact*i;
       }
        temp/=10;
        sum+=fact;
   }
       if(sum == n)
       {
        printf("Strong Number");
       }
       else
       {
        printf("Not Strong");
        }

    return 0;
}
