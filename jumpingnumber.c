#include <stdio.h>

// Function to check if a number is a jumping number
int isJumpingNumber(int num) {
    int digit1, digit2;

    while (num > 0) {
        digit1 = num % 10;
        num /= 10;
        if (num == 0) {
            return 1; // Only one digit left, so it's a jumping number
        }
        digit2 = num % 10;
        if (abs(digit1 - digit2) != 1) {
            return 0; // If difference is not 1, it's not a jumping number
        }
    }
    return 1;
}

int main() {
    printf("The largest three-digit jumping number is: ");

    for (int i = 987; i >= 102; i--) {
        if (isJumpingNumber(i)) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
