#include <stdio.h>

// Function for linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index of the key if found
        }
    }
    return -1; // Return -1 if key not found
}

// Function for binary search
int binarySearch(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid; // Return the index of the key if found
        } else if (arr[mid] < key) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    
    return -1; // Return -1 if key not found
}

int main() {

    int size;
    printf("enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements : ");
   
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
     int key;
    printf("enter the key : ");
    scanf("%d",&key);
    
    // int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int key = 12;

    // Perform linear search
    int linearIndex = linearSearch(arr, n, key);
    if (linearIndex != -1) {
        printf("Linear Search: Element %d found at index %d\n", key, linearIndex);
    } else {
        printf("Linear Search: Element %d not found\n", key);
    }

    // Perform binary search
    int binaryIndex = binarySearch(arr, n, key);
    if (binaryIndex != -1) {
        printf("Binary Search: Element %d found at index %d\n", key, binaryIndex);
    } else {
        printf("Binary Search: Element %d not found\n", key);
    }

    return 0;
}
