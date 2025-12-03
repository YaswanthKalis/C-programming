#include <stdio.h>
int main()
{
    int n,i,j,upper=1;
    scanf("%d",&n);
    int a[n][n];
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=0&&i>j)
            {
                upper=0;
            }
            upper=1;
        }
    }
        if (upper==1)
        {
            printf("Upper Triangular Matrix");
        }
        else
        {
            printf("Not an Upper Triangular Matrix");
        }
    
    return 0;
}
