#include<stdio.h>
int main(void){
    int a;
    scanf("%d",&a);
    if(a<=39){printf("D");}
    else if(a<=69){printf("C");}
    else if(a<=89){printf("B");}
    else if(a<=100){printf("A");}
}