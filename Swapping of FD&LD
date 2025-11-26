#include <stdio.h>
int main()
{
   int n,t,ld,fd,md,sd,pow=1;
   scanf("%d",&n);

   t=n;
   ld=n%10;
   while(t>=10)
   {
       t/=10;
       pow*=10;
   } fd=t;

   md=n%pow;
   md/=10;
   
   sd=ld*pow+md*10+fd;
   printf("%d",sd);
   
    return 0;
}
