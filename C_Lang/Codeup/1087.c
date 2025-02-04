#include<stdio.h>
int main(void){
    long int a,i,s=0;
    scanf("%ld",&a);
    for(i=1;s<a;i++){ //조건을 for(i=1;;i++)라고 작성한다면 if문과 break;를 통해 처리할 수 있다.
        s+=i;
    }
    printf("%ld",s);
    
}