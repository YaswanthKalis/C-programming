#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
int main()
{
   int n,i,j;
   char s[100][100],ch,rh;
   int freq[256]={0};

   scanf("%d",&j);
   getchar();

   for(i=0;i<j;i++){
   fgets(s[i],100,stdin);
   s[i][strcspn(s[i],"\n")]='\0';
   }

   int first=0,second=0;
   int fi=-1,s_i=-1;
   for(i=0;i<j;i++){
        n = strlen(s[i]);
        if(n>first){
                second=first;
                s_i=fi;
                first=n;
                fi=i;
        }
        else if((n>second)&&(n<first)){
                second=n;
                s_i=i;
        }
   }
   if(s_i!=-1){
    printf("%s",s[s_i]);}
   return 0; 
}

