#include <stdio.h>
int main()
{
    int n,i,j,t;
    scanf("%d",&n);
    
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&t);
    int found=0;
    
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
     {
       if(a[i]+a[j]==t)
       {
        found=1;
          printf("%d %d\n",a[i],a[j]); // i,j -> a[i],a[j]
        }
     }
    }
    if(!found)
    {
        printf("-1");
    }
    return 0;
}
