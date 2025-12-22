#include <stdio.h>
int main()
{
  int n,i,j,space;
  scanf("%d",&n);
  int num=1;
  
  for(i=1;i<=n;i++)
  {
      for(space=1;space<i;space++)
      {
         printf(" ");
      }
      for(j=1;j<=i;j++)
      {
          printf("%d",num);
          num++;
      } 
      printf("\n");
  }

  return 0;
}
