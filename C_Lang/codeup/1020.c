#include<stdio.h>
int main(void){
    int a, b;
    scanf("%d-%07d",&a,&b);
    printf("%06d%d",a,b);
}