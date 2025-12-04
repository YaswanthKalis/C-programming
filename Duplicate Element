#include <stdio.h>

int main()
{
   int n,i,j;
   scanf("%d",&n);
   int a[n],freq[n];
   
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
       freq[i]=-1;
   }
   
   for(i=0;i<n;i++){
       if(freq[i]==-1){
           int count=0;
           for(j=0;j<n;j++){
               if(a[i]==a[j]){
                   count++;
                   freq[j]=0;
               }
           }
           freq[i]=count;
       }
   }
   
   for(i=0;i<n;i++){
       if(freq[i]>1){     //freq[i]>0-->[>1]
       printf("%d ",a[i]);
       }
   }
    return 0;
}
