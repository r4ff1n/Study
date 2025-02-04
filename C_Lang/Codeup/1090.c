//등비수열
#include<stdio.h>
#include<math.h>
int main(void){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%.0f",a*pow(b,c-1)); //pow 함수 대신 별도의 변수를 두어 a*(제곱된 변수)로 사용해보자.
    return 0;
}

//모범 답안
#include <stdio.h>
int main() 
{
    long long int a, b, c, i;
    scanf("%lld %lld %lld", &a, &b, &c);
    for(i = 1 ; i < c; i++)
    {
        a *= b;
    }
     
    printf("%lld", a);
}
