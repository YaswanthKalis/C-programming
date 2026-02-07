#include <stdio.h>
int main()
{
   int n,count=0;
   /*assuming 32 as the secret number*/
   while(count<7)
   {
       scanf("%d",&n);
       count++;
       if((n<=0)||(n>100))
       { 
           printf("Invalid Number!");
       }
       if(n!=32)
       { 
           if(n<32)
       {     
          printf("%d, is too low\n",n);
       }
           if(n>32)
       {     
          printf("%d, is too high\n",n);
       }
       }
       if(n==32)
       {
           printf("%d is the correct number\n",n);
           printf("WIN!\n");
           printf("Attempts:%d\n",count);
           break;
       }
   }
       if(count>=7)
       {
          printf("OUT!");
       }
    return 0;
}
