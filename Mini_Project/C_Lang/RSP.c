#include <stdio.h>

int main(void) {
    char user1, user2;

    // User1 입력
    printf("User1 입력 (R, P, S): ");
    scanf(" %c", &user1);

    // User2 입력
    printf("User2 입력 (R, P, S): ");
    scanf(" %c", &user2);

    // 입력 값 검증
    if ((user1 != 'R' && user1 != 'P' && user1 != 'S') || (user2 != 'R' && user2 != 'P' && user2 != 'S')) {
        printf("Invalid Input\n");
        return 1;
    }

    // ASCII 값 변환 및 승패 판정
    int value1 = (int)user1;
    int value2 = (int)user2;

    if (value1 == value2) {
        printf("Draw\n");
    } else if ((value1 == 82 && value2 == 83) || // R > S
               (value1 == 83 && value2 == 80) || // S > P
               (value1 == 80 && value2 == 82)) { // P > R
        printf("User1 Wins\n");
    } else {
        printf("User2 Wins\n");
    }

    return 0;
}
