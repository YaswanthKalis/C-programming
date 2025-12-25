#include <stdio.h>
int main()
{
   int r,co,i,j,sum=0;
   scanf("%d%d",&r,&co);
   int a[100][100];
   
   for(i=0;i<r;i++){
       for(j=0;j<co;j++){
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<r;i++){
          sum+=a[i][i];
   }
   printf("%d",sum);

    return 0;
}
