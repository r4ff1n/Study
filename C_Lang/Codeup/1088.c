#include<stdio.h>
int main(void){
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(i%3!=0){printf("%d ",i);}//if 문을 i:%3==0 일때로 가정한다면 아래 주석과 같이 사용 가능하다.
        // if(i%3==0){continue;}printf("%d ",i);
    }
}