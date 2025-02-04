#include<stdio.h>
int main(void){
    int a;
    scanf("%d",&a);
    switch(a){
    case 12:case 1:case 2:printf("winter");break; //default값으로 지정해도 됨. 다만 그렇게 할 경우 13을 입력해도 default 로 출력이 되기 때문에 제외하였음.
    case 3:case 4:case 5:printf("spring");break;
    case 6:case 7:case 8:printf("summer");break;
    case 9:case 10:case 11:printf("fall");break;
    }
}