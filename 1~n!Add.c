#include<stdio.h>
int main(){
    int i = 0,n = 1,k;
    scanf("%d",&k);
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        n *= i;
        sum += n;
    }
    printf("%d",sum);
    return 0;
}