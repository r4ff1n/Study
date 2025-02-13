//atoi 함수의 사용법
#include <stdio.h>
#include <stdlib.h>

void usage(char *program_name){
    printf("사용법:%s <message> <반복할 횟수 #>\n", program_name);
    exit(1);
}
int main(int argc, char *argv[]){
    int i, count;
    if(argc<3){
        usage(argv[0]);
    }
    count=atoi(argv[2]);
    printf("%d번 반복..\n",count);

    for(i=0; i<count; i++){
        printf("%3d - %s\n",i, argv[1]);
    }
}