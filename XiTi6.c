#include<stdio.h>
#include<string.h>
int main(){
    char arr[] = {'C','h','i','n','a','\0'};
    for(int i=0;i<=strlen(arr)-1;i++){
        arr[i]+=4;
        putchar(arr[i]);
        printf("\t%c\n",arr[i]);
    }
    return 0;
}