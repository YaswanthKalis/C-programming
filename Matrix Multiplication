#include <stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k;
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    int a[100][100],b[100][100],p[100][100];
    
    if(c1!=r2){
        printf("Multiplication Error");
    }
    
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            p[i][j]=0;
        }
    }
     for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){
                p[i][j]+=a[i][k]*b[k][j];
            }
            
        }
    }
    
     for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",p[i][j]);
        } printf("\n");
    }
    
    return 0;
}
