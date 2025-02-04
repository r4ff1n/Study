#include<stdio.h>
int main(void){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    printf("%ld\n%.1f", (long)a+b+c, (float)(a+b+c)/3);
}