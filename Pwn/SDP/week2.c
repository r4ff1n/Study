#include <stdio.h>

int main(void){
    int i;
    int buf[10];

    printf("Input Buf: ");
    scanf("%s", buf);
    if(i == 0xdeadbeef){
        printf("Hacked!");
    }
}
//pip install winpwn // 윈도우용 pwntools