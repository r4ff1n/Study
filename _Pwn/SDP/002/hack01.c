// gcc -o hack01 hack01.c -fno-stack-protector
#include <stdio.h>

int main(void){
    int buf[10];
    int i;

    printf("Input Buf: \n");
    scanf("%s", buf);

    if(i == 0xdeadbeef){
        printf("Hacked!");
    }
    
    return 0;
}