#include<stdio.h>
int main(){
    int i;
    char s[100];
    fgets(s,100,stdin);
    
    //Uppercase Conversion
    for(i=0;s[i];i++){
        if((s[i]>='a')&&(s[i]<='z')){
            s[i]-=32;
        }
    }
    printf("%s",s);
    
       //Lowercase Conversion
    for(i=0;s[i];i++){
        if((s[i]>='A')&&(s[i]<='Z')){
            s[i]+=32;
        }
    }
    printf("%s",s);
    
}
