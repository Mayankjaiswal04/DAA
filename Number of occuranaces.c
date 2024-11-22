#include <stdio.h>


int findFirstOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1, result = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == key) {
            result = mid;  
            high = mid - 1;
        } else if (arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return result;
}


int findLastOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1, result = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == key) {
            result = mid;  
            low = mid + 1;
        } else if (arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return result;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 3, 3, 4, 5, 5, 5, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5; 

    int firstOccurrence = findFirstOccurrence(arr, n, key);
    int lastOccurrence = findLastOccurrence(arr, n, key);

    if (firstOccurrence != -1)
        printf("First occurrence of %d is at index %d\n", key, firstOccurrence);
    else
        printf("%d not found\n", key);

    if (lastOccurrence != -1)
        printf("Last occurrence of %d is at index %d\n", key, lastOccurrence);
    else
        printf("%d not found\n", key);

    return 0;
}
