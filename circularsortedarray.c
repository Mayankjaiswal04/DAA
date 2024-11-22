#include <stdio.h>

int findRotationCount(int arr[], int n) {
    int low = 0, high = n - 1;

    if (arr[low] <= arr[high])
        return 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < arr[(mid + n - 1) % n] && arr[mid] < arr[(mid + 1) % n])
            return mid;


        if (arr[mid] >= arr[low])
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; 
}
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int searchInRotatedArray(int arr[], int n, int key) {
    int rotationIndex = findRotationCount(arr, n);

    if (rotationIndex == 0)
        return binarySearch(arr, 0, n - 1, key);


    if (key >= arr[0] && key <= arr[rotationIndex - 1])
        return binarySearch(arr, 0, rotationIndex - 1, key);

    return binarySearch(arr, rotationIndex, n - 1, key);
}

int main() {
    int arr[] = {5,8,5,6,9,7,4,3,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3; 

    int rotationCount = findRotationCount(arr, n);
    int search_element = searchInRotatedArray(arr, n, key);

    if (rotationCount != -1)
        printf("The array is rotated %d times\n", rotationCount);
    else
        printf("Invalid input\n");
    
        if (search_element != -1)
        printf("Element %d found at index %d\n", key, search_element);
    else
        printf("Element %d not found\n", key);

    return 0;
}
