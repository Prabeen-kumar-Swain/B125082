//5. SumofArray Using Pointer Arithmetic
#include <stdio.h>

int sumArray(int *ptr, int n) {
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += *(ptr + i);

    return sum;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("The sum of the numbers in the array: %d ", sumArray(arr, n));

    return 0;
}
