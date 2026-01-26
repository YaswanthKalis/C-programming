#include <stdio.h>

int main()
{
   int n,t,isPrime,count=0,i,j;
   scanf("%d",&n);
  
   for(i=n+1;count<1;i++)
   {
       isPrime=1;
       
       for(j=2;j<i;j++){
           if(i%j==0){
               isPrime=0;
               break;
           }
       }
       
       if(isPrime==1)
          {  
           printf("%d",i);
            count++;
          }
   }
   
    return 0;
}
