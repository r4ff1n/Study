#include<stdio.h>
int main(void){
    float a,b,c,d;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    printf("%.1f MB",(a*b*c*d)/8/1024/1024);
}