#include <stdio.h>

int main(int arg_count, char *arg_list[]){
    int i;
    printf("%d개의 인자가 입력됐다.\n", arg_count);
    for(i=0; i<arg_count; i++){
        printf("argument #%d\t-\t%s\n",i, arg_list[i]);
    }
}