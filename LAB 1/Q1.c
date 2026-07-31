//1. Array Statistics
#include <stdio.h>

void arrayStats(int arr[], int n) {
    int largest = arr[0], smallest = arr[0];
    float sum = 0, avg;
    

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
        sum += arr[i];
    }
    avg = sum/n;
  
    printf("The largest number in the array is : %d\n", largest);
    printf("The smallest number in the array is : %d\n", smallest);
    printf("The average of all the numbers in the array is : %f",avg);
}
int main(){
    int n;
    printf("Enter the number of ELements in your array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    arrayStats(arr, n);
    return 0;
}
