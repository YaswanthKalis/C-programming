#include <stdio.h>
int main()
{
  int n,i,j;
  char alp='A';
  scanf("%d",&n);
  for(i=1;i<=n;i++)
{
      for(j=1;j<=i;j++)
 {
          printf("%c",alp);
          alp++;
 }
        printf("\n");
}
    return 0;
}
