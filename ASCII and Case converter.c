#include <stdio.h>
int main()
{
  char ch;
  scanf("%c",&ch);
  printf("%d\n",ch);
  
  if((ch>='A')&&(ch<='Z'))
  {
      printf("%c",ch+32);
  }
  if((ch>='a')&&(ch<='z'))
  {
      printf("%c",ch-32); 
  }
       return 0;
}
