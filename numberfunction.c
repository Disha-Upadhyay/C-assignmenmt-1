#include "disha.h"
#include <stdio.h>
#include <math.h>

// Number functions
int reverseDigits(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    return r;
}

int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;
    int temp = num;
    while (temp > 0) { digits++; temp /= 10; }
    temp = num;
    while (temp > 0) { 
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return sum == original;
}

int isAdams(int num) {
    int square = num * num;
    return reverseDigits(square) == reverseDigits(num) * reverseDigits(num);
}

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i*i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}

int isPrimePalindrome(int num) {
    return isPrime(num) && num == reverseDigits(num);
}
