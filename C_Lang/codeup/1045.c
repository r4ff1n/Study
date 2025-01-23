#include<stdio.h>
int main(void){
    int a, b;
    scanf("%d %d", &a,&b);
    printf("%ld\n", (long)a+b);
    printf("%ld\n", (long)a-b);
    printf("%lld\n", (long long)a*b);
    printf("%d\n", (int)a/b);
    printf("%ld\n", (long)a%b);
    printf("%.2f\n", (float)a/b);
}