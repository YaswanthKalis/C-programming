
#include <stdio.h>
int main()
{
  int n,div=1;
  scanf("%d",&n);
  int temp=n;
  int sq=n*n;
  
  while(temp>0)
  {
      div=div*10;
      temp/=10;
  }
  
  if(sq%div==n)
  {
      printf("%d is an Automorphic number",n);
  }      
  else
  {
      printf("%d is not an Automorphic number",n);
  }
  return 0;
}
