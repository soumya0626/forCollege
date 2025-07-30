#include <stdio.h>

int main() {
    int num, reversedNum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Please enter a valid 3-digit number.\n");
        return 1;
    }

    // Reverse the digits
    reversedNum += (num % 10) * 100; // Extract the last digit and make it the first
    num /= 10;                       // Remove the last digit
    reversedNum += (num % 10) * 10;  // Extract the middle digit and make it the second
    num /= 10;                       // Remove the middle digit
    reversedNum += num;              // Add the first digit as the last

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
