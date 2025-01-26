#include<stdio.h>
int main(void){
    int a[10000]={};
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&m);a[m]++;}
    for(int i=0;i<n;i++){if(a[i]!=0){printf("%d",i);break;}}
}


// 모범 답안
#include <stdio.h>

int main()
{
    int i, j, k;
    int a[10000] = {0};
    int min = 24;
    
    scanf("%d", &k);
    for(i=0; i<k; i++)
    {
        scanf("%d", &a[i]);
        if(min > a[i])
            min  =a[i];
    }
    printf("%d", min);
    return 0;
}
