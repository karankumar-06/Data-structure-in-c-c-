/* Write a program to find min & max from the given array using recursion

#include <stdio.h>
#include <conio.h>

void findMinMax(int arr[], int start, int end, int *min, int *max) {
    // Base case: If only one element
    if (start == end) {
        *min = arr[start];
        *max = arr[start];
        return;
    }
    
    // Base case: If two elements
    if (end == start + 1) {
        if (arr[start] < arr[end]) {
            *min = arr[start];
            *max = arr[end];
        } else {
            *min = arr[end];
            *max = arr[start];
        }
        return;
    }
    
    // Recursive case: divide the array
    int mid = (start + end) / 2;
    int min1, max1, min2, max2;
    
    findMinMax(arr, start, mid, &min1, &max1);
    findMinMax(arr, mid + 1, end, &min2, &max2);
    
    *min = (min1 < min2) ? min1 : min2;
    *max = (max1 > max2) ? max1 : max2;
}

int main() {
    int arr[] = {3, 5, 1, 2, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, 0, n - 1, &min, &max);
    printf("Minimum element is %d\n", min);
    printf("Maximum element is %d\n", max);

    getch(); // wait for a key press before closing
    return 0;
}
