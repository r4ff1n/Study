#include <stdio.h>
#include <unistd.h>
#include <string.h>
// gcc -o bof1 bof1.c -fno-stack-protector -no-pie
void box()
{
    system("bin/sh");
}
int main(void)
{
    char buf[8];
    memset(buf, "x00", sizeof(buf));
    write(1, ">", 2);
    read(0, buf, 8 * 8);
    // printf("%s", buf);
    return 0;
}