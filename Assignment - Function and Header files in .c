// NAME - DISHA UPADHYAY
// UNIVERSITY ROLL NO – 12515000520
// CLASS ROLL NO - 17
// SUBJECT - C PROGRAMMING
// SUBJECT CODE - BCSG 0802

#include <stdio.h>
#include <math.h>

// Function to reverse digits of a number
int reverseDigits(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    return r;
}

// Function to check if number is Armstrong
int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;
    int temp = num;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    return sum == original;
}

// Function to check if number is Adams Number
int isAdams(int num) {
    int square = num * num;
    int reversedNum = reverseDigits(num);
    int reversedSquare = reverseDigits(square);
    return reversedSquare == (reversedNum * reversedNum);
}

// Function to check if number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to check if number is prime and palindrome
int isPrimePalindrome(int num) {
    return isPrime(num) && num == reverseDigits(num);
}

// Main menu-driven program
int main() {
    int choice, num;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Armstrong Number\n");
        printf("2. Check Adams Number\n");
        printf("3. Check Prime Palindrome Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        printf("Enter a number: ");
        scanf("%d", &num);

        switch (choice) {
            case 1:
                if (isArmstrong(num))
                    printf("%d is an Armstrong number.\n", num);
                else
                    printf("%d is NOT an Armstrong number.\n", num);
                break;

            case 2:
                if (isAdams(num))
                    printf("%d is an Adams number.\n", num);
                else
                    printf("%d is NOT an Adams number.\n", num);
                break;

            case 3:
                if (isPrimePalindrome(num))
                    printf("%d is a Prime Palindrome number.\n", num);
                else
                    printf("%d is NOT a Prime Palindrome number.\n", num);
                break;

            default:
                printf("Invalid choice! Please select between 1–4.\n");
        }

    } while (choice != 4);

    return 0;
}

