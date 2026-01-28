#include <stdio.h>
int main()
{
  int n,i,temp,rev=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    temp = i;
    rev=0;
    while(temp!=0)
     {
      rev=rev*10+temp%10;
      temp/=10; 
     }
    if(rev==i)
    {
      printf("%d ",i);
    } 
  }
  return 0;
}
