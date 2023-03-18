//Write a C code to find the number of distinct elements in a sorted array.

#include <stdio.h>
int main() 
{
    int arr[] = {1, 2, 3, 3, 4, 4, 4, 5, 6, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int distinct_count = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i-1]) {
            distinct_count++;
        }
    }

    printf("The number of distinct elements is: %d\n", distinct_count);

  return 0;
}
