#include<stdio.h>
int main(void){
    int a,b;
    scanf("%d",&a);
    for (a!=0; a--;){
        scanf("%d",&b);
        printf("%d\n",b);
    }
    return 0;
}