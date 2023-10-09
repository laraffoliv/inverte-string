#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[20];
    
    fgets(str,20,stdin);
    int length = strlen(str);
    for(int i=0;i<length/2;i++){
        char letra = str[i];
        
        str[i] = str[length - i - 1];
        str[length - i - 1] = letra;
    
    }
    printf("\n%s",str);
    return 0;
}
