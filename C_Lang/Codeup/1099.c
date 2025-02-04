#include<stdio.h>
int main(){
    int x=1,y=1;
    int g[10][10];
    for(int i=0; i<=9; i++){
        for(int j=0; j<=9; j++){
            scanf("%d",&g[i][j]);
        }
    }
    while(1){
        if(g[x][y]==2){g[x][y]=9;break;}
        g[x][y]=9;
        if(g[x][y+1]!=1){
            y++;
        }else if(g[x+1][y]!=1){
            x++;
        }else break;
    }
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            printf("%d ",g[i][j]);
        }
    puts("");
    }
}