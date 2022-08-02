// Binary Search in C

#include <stdio.h>

int binarySearch(int arr[], int x, int low, int high) {
    int  mid = 0;
    while (low <= high) {
        mid = (low + high) / 2 ;
        if (x == arr[mid])
            return mid;
        else if (x > arr[mid] )       // x is on the right side
            return binarySearch(arr, x, mid + 1, high);
        else                               // x is on the right side
            return binarySearch(arr, x, low, mid - 1);
    }

  return -1;
}

int main() {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 7;
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}


