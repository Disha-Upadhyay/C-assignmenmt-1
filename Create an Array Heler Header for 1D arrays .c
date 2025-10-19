// Array helper functions

#include <stdio.h>

// Function to display array elements
void displayArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to reverse array
void reverseArray(int arr[], int size) {
    for(int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

// Function to find index of max element
int findMaxIndex(int arr[], int size) {
    int idx = 0;
    for(int i = 1; i < size; i++) {
        if(arr[i] > arr[idx]) {
            idx = i;
        }
    }
    return idx;
}

// Function to find index of min element
int findMinIndex(int arr[], int size) {
    int idx = 0;
    for(int i = 1; i < size; i++) {
        if(arr[i] < arr[idx]) {
            idx = i;
        }
    }
    return idx;
}

// Function to calculate average
float findAverage(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

// Function to search value using linear search
int linearSearch(int arr[], int size, int value) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == value) {
            return i;
        }
    }
    return -1;
}

// Function to sort array in ascending order
void sortArray(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Sample main function to test
int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = 5;

    printf("Original array: ");
    displayArray(arr, size);

    printf("Max index: %d\n", findMaxIndex(arr, size));
    printf("Min index: %d\n", findMinIndex(arr, size));
    printf("Average: %.2f\n", findAverage(arr, size));

    reverseArray(arr, size);
    printf("Reversed array: ");
    displayArray(arr, size);

    sortArray(arr, size);
    printf("Sorted array: ");
    displayArray(arr, size);

    int val = 7;
    int pos = linearSearch(arr, size, val);
    if(pos != -1)
        printf("%d found at index %d\n", val, pos);
    else
        printf("%d not found\n", val);

    return 0;
}
