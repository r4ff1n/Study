#include <stdio.h>

int main(void){
    int buf[10];
    int i;

    printf("Input Buf: ");
    scanf("%s", buf);

    if(i == 0xdeadbeef){
        printf("Hacked!");
    }
    
    return 0;
}