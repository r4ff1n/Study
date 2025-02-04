#include<stdio.h>
int main(void){
    int a[10000];
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&m);a[i]=m;}
    for(int i=n;i>0;i--){printf("%d ",a[i-1]);}
}