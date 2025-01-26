#include<stdio.h>
int main(void){
    int a[23]={};
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&m);a[m-1]++;}
    for(int i=0;i<23;i++){printf("%d ",a[i]);}
}