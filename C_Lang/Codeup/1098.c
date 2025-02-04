#include<stdio.h>
int main(){
    int x,y,n,a,b,c,d;
    scanf("%d%d",&x,&y);
    int g[x][y];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            g[i][j] = 0;
        }
    }
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(b==0){
            for(int j=0; j<a; j++)g[c-1][d-1+j]=1;
        }
        else{
            for(int j=0; j<a; j++)g[c-1+j][d-1]=1;
        }
    }
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("%d ",g[i][j]);
        }
        puts("");
    }
}