#include <stdio.h>
int main()
{
  int m,n,i,gcd,min;
  scanf("%d%d",&m,&n);
  
  if(m>n)
  {
      min=n;
  }
  else
  { 
    min=m;
  }
  
  for(i=1;i<=min;i++)
  {
      if(m%i==0&&n%i==0)
      {
          gcd=i;
      }
  }
   printf("GCD:%d",gcd);
  
    return 0;
}
