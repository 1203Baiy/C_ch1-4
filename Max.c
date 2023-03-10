#include<stdio.h>
int main(){
    int max(int x,int y);
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=max(a,b);
    printf("is max = %d",c);
    return 0;
}
int max(int x, int y){
    if(x>y) return x;
    else return y;
}