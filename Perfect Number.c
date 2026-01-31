#include <stdio.h>
int main()
{
  int n,i,sum=0,k;
  scanf("%d",&n);
  int temp=n;
  
  for(i=1;i<temp;i++)
  {
      if(temp%i==0)
      {
           k=i;
           sum+=k;
      }
  }
    if(sum==n)
    {
       printf("Perfect Number");
    }
    else
    {
       printf("Not a Perfect Number");
    }
   
    return 0;
}
