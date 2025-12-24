#include <stdio.h>
int main()
{
  int m,n,i;
  scanf("%d%d",&m,&n);
  
  for(i=1;i<=m;i++)
  {
      int a=n;
      n+=a;
      printf("%d ",n);
  }
  
    return 0;
}
