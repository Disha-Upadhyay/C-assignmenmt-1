// Header files
#include <stdio.h>
#include <math.h>
#include "disha.h"  // Custom header for number functions

// Function to display array elements
void displayArray(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i != size - 1)
            printf(", ");
    }
    printf("]\n");
}

// Function to reverse array
void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

// Function to find index of max element
int findMaxIndex(int arr[], int size) {
    int maxIdx = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIdx])
            maxIdx = i;
    }
    return maxIdx;
}

// Function to find index of min element
int findMinIndex(int arr[], int size) {
    int minIdx = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIdx])
            minIdx = i;
    }
    return minIdx;
}

// Function to calculate average
float findAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

// Function to search element using linear search
int linearSearch(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value)
            return i;
    }
    return -1;
}

// Main function
int main() {
    int num = 12;

    // Number checking functions
    printf("Number Functions:\n");
    printf("%d is Armstrong? %s\n", num, isArmstrong(num) ? "Yes" : "No");
    printf("%d is Adams? %s\n", num, isAdams(num) ? "Yes" : "No");
    printf("%d is Prime Palindrome? %s\n", num, isPrimePalindrome(num) ? "Yes" : "No");

    // Array operations
    int arr[] = {3, 1, 4, 1, 5};
    int n = 5;

    printf("\nArray Functions:\n");
    printf("Original Array: ");
    displayArray(arr, n);

    printf("Max element index: %d\n", findMaxIndex(arr, n));
    printf("Min element index: %d\n", findMinIndex(arr, n));
    printf("Average of array: %.2f\n", findAverage(arr, n));

    reverseArray(arr, n);
    printf("Reversed Array: ");
    displayArray(arr, n);

    int searchVal = 4;
    int foundIdx = linearSearch(arr, n, searchVal);
    if (foundIdx != -1)
        printf("Element %d found at index %d\n", searchVal, foundIdx);
    else
        printf("Element %d not found in array\n", searchVal);

    return 0;
}
