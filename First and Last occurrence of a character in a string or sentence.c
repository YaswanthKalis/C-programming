#include <stdio.h>
#include <string.h>
int main()
{
    int i, count = 0,pos=-1;
    char str[100],ch;
    fgets(str,sizeof(str),stdin);

    int len= strlen(str);
    if(str[len-1]=='\n'){
        str[len-1]='\0';
        len--;
    }

    scanf("%c",&ch);
    
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            pos=i;
            break;     // remove this to find until last occurrence
        }
    }
    if(pos!=-1)
    {
        printf("%d",pos);
    }
    else
    {
        printf("NF");
    }
    return 0;   
}

