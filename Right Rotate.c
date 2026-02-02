#include <stdio.h>
int main() {

    int n, k, i,last;
    scanf("%d %d", &n, &k);
    int a[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
     k=k%n;
     while(k--)
     {
         last=a[n-1];

         for(i=n-1;i>0;i--)
         {
             a[i]=a[i-1];
         }
         a[0]=last;
     }
     for(i=0;i<n;i++)
     {
         printf("%d ",a[i]);
     }
    return 0;
}
