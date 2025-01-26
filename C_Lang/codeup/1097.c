#include<stdio.h>
int main(void){
    int a[19][19]={};
    int n,x,y;
    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            scanf("%d",&a[i][j]);
            }
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        for(int j=0; j<19; j++){
            a[j][y-1]=!a[j][y-1];
            a[x-1][j]=!a[x-1][j];
        }
        
    }
    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            printf("%d ",a[i][j]);
            }
        puts("");
    } 
}