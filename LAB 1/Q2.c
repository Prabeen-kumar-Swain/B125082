//2. Reverse an Array
#include <stdio.h>

int reverse_arr(int arr[], int n){
    for(int i = 0 ;i < n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    printf("The reversed array is: \n");
    for(int i = 0; i < n; i++){
        printf("%d  ", arr[i]);
    }
    return 0;
}

int main(){
    int n;
    printf("Enter the number of Elements in your array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    reverse_arr(arr, n);
}
