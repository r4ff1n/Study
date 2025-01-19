#include <stdio.h>
// 2주차
// int main(void){
//     int number; // type 변수명
//     int number2;
//     // scanf("%d", number); // number라는 주소 값을 알 수 없기 때문에 입력할 수 없음
//     scanf("%d", &number);
//     printf("%d", number);
//     // scanf("%d %d",number, number2);
//     return 0;
// }

int main(void){
    int number = 30;
    int input;
    while(1){
        scanf("%d", &input);

        if(number<input){
            printf("Over\n");
        }
        else if (number>input){
            printf("Under\n");
        }
        else{
            printf("Correct\n");
            break;
        }
    }
}