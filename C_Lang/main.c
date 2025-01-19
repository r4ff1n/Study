#include <stdio.h> // stdio.h라는 헤더파일을 사용하겠다. stdio(standard input output)
#define SIZE 100 // 전처리(pre-processing SIZE -> 100)

// C언어에서는 start 함수 호출 이후 main을 호출하게 된다. 따라서 main 함수가 필요하다.
int main(int argc, char *argv[]){ //argv
//unsigned는 부호 여부에 대한 의미임
    short a; //2byte
    int b; // 4byte
    long long c; // 8bytes
    unsigned short d;
    unsigned int e;
    unsigned long long f;
    float g; // 실수형, 부동소수점으로 인해 계산이 어려울 수 있음
    double h; // 실수형
    char i; // 문자 한 글자를 사용할 경우 사용함
    unsigned char j;
    char k[SIZE]; // SIZE크기의 문자열을 변수를 선언
    char *l[]; // Size 주소를 할당
    void m; // void(아무것도 없음, 비어있다는 의미)

    printf("%d", b); // %d decimal 10진수
    printf("%lld", b); // 
    printf("%u", b);
    printf("%11u", b);
    printf("%f", b);
    printf("%f", b);
    printf("%f", b);
    return 0;
}