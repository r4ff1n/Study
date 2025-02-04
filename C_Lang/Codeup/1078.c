#include<stdio.h>
int main(void){
    int a,b=0;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){if(i%2==0){b=b+i;}}
    printf("%d",b);
}