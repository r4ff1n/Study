#include<stdio.h>
int main(void){
    int a;
    s:
        scanf("%d",&a);
        if(a!=0){printf("%d\n",a);}
    if(a!=0){goto s;}
    return 0;
}