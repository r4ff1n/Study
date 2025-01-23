// gcc -m32 -o test32 test.c
// gcc -m64 -o test64 test.c
// if you use "gcc-14", apt install gcc-14-multilib
#include <stdio.h>

int main(int argc, char** argv){
    printf("Hello, world\n");
    return 0;
}
