#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char * str = "ABCD"; // 16진수: 41424344
	puts(str);	// 문자열 출력 결과: ABCD
    //문자열을 메모리에 저장할 때는 바이트 오더링을 고려하지 않는다.

    unsigned int num = 0;
    num = 0x41424344;
    printf("%x\n", num);  // 16진수 출력 결과: 41424344
    // 문자열이 아닌 데이터는 리틀 엔디안 방식으로 저장된다.
    // 따라서 16진수 0ㅌ41424344는 가장 오른쪽의 바이트부터 메모리의 낮은 주소에 저장된 것을 볼 수 있다.
    return 0;
}