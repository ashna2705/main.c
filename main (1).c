#include <stdio.h>
#include<string.h>
int main()
{
    char t[100];
    char p[100];
    printf("Text: ");
    gets(t);
    printf("Pattern: ");
    gets(p);
    int P,T,k;
    P=strlen(p);
    T=strlen(t);
    k=0;
    int index=0;
    for(int i=0;i<=T-P;i++){
        for(int j=i;j<i+P;j++){
            k=1;
            if(t[j]!=p[j-i]){
                k=0;
                break;
            }
        }
        if(k==1){
            index=i;
            break;
        }
    }
    if(k==1){
        printf("%s present in %s at index %d",p,t,index);
    }
    else{
        printf("p not present in t");
    }
    return 0;
    }