#include <stdio.h>
int main()
{
   int n,ld,temp,sum=0;
   scanf("%d",&n);rst
   temp=n;
   
   ld=temp%10;
   
   while(temp>=9)
   {
    temp/=10;
   }  
    
    sum=temp+ld;
    printf("%d",sum);

    return 0;
}
 
