#include <stdio.h>

// Function to perform selection sort
void selectionSort(int arr[], int n) {
int i, j, minIdx, temp;
    
// One by one move the boundary of the unsorted subarray
for (i = 0; i < n - 1; i++) {
// Find the minimum element in the unsorted portion of the array
minIdx = i;
for (j = i + 1; j < n; j++) {
if (arr[j] < arr[minIdx]) {
minIdx = j;
   }
 }

// Swap the found minimum element with the first element of the unsorted portion
if (minIdx != i) {
temp = arr[i];
arr[i] = arr[minIdx];
arr[minIdx] = temp;
 }
 }
}

// Function to print an array
void printArray(int arr[], int size) {
int i;
for (i = 0; i < size; i++) {
printf("%d ", arr[i]);
}
printf("\n");
}

int main() {
int arr[] = {64, 25, 12, 22, 11};
int n = sizeof(arr) / sizeof(arr[0]);
    
printf("Original array:\n");
printArray(arr, n);
    
selectionSort(arr, n);
    
printf("Sorted array:\n");
printArray(arr, n);
    
return 0;
}