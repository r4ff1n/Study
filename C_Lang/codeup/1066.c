#include<stdio.h>
int main(void){
    int a;
    scanf("%d",&a);
    if(a<0){printf("minus\n");if(a%2==0){printf("even\n");}else{printf("odd");}}else{printf("plus\n");if(a%2==0){printf("even\n");}else{printf("odd");}}
}