#include <stdio.h>
int main() {

    int n, k, i,first;
    scanf("%d %d", &n, &k);
    int a[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
     k=k%n;
     while(k--)
     {
         first =a[0];
         for(i=0;i<n-1;i++)
         {
             a[i]=a[i+1];
         }
         a[n-1]=first;
     }
     for(i=0;i<n;i++)
     {
         printf("%d ",a[i]);
     }
    return 0;
}
