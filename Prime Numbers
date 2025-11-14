#include <stdio.h>

int main()
{
   int n,i,j,count=0;
   scanf("%d",&n);
   i=n+1;
   
   while(count<5)
   {
     int isPrime=1;  
     for(j=2;j<=i/2;j++)
     {
         if(i%j==0)
         {
             isPrime=0;
             break;
         } 
     } 
      if(isPrime==1)
      {
          printf("%d\n",i);
          count++;
      }
      i++;
   }
    return 0;
}
