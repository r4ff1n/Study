#include<stdio.h>
int main(void){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    printf("%.2f MB",(a*b*c)/8/1024/1024);
}