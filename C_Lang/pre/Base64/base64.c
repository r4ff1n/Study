#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

void encode(input)
{
    printf("");
    return 0;
}
void decode(input)
{
    printf("");
    return 0;
}

int main(int argc, char const *argv[])
{
    unsigned char *input = (char *)malloc(sizeof(char) * 100);
    uint32_t select = 0;
    printf("값을 입력하세요: ");
    scanf("%20s", input);
    // printf("입력한 값: %s\n",input);
    while(1)
    {
        printf("1. 인코딩\n2. 디코딩\nSelect: ");
        scanf("%1d", &select);
        switch (select)
        {
        case 1:
            encode(input);
            break;
        case 2:
            decode(input);
            break;
        default:
            puts("Invalid input!");
            break;
        }
    }
    return 0;
}