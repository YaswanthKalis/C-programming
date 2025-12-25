#include <stdio.h>
int main()
{
    int n,i,j,r,c;
    scanf("%d%d",&r,&c);
    int a[100][100],b[100][100],p[100][100];
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            p[i][j]=a[i][j]+b[i][j]; // for subtraction replace (+) by (-)
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("%d ",p[i][j]);
        } printf("\n");
    }
    
    return 0;
}
