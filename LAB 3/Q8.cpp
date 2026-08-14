//8. Dynamic Array with Function Processing
#include <iostream>

using namespace std;

void acceptElements(int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

int sumOfElements(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

int findSmallestElement(int* arr, int n) {
    int smallest = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}

int findLargestElement(int* arr, int n) {
    int largest = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

void displayResults(int* arr, int n, int sum, int smallest, int largest) {
    cout << "The array is: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << "\nSum of elements: " << sum << '\n';
    cout << "Smallest element: " << smallest << '\n';
    cout << "Largest element: " << largest << '\n';
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];

    acceptElements(arr, n);
    
    int sum = sumOfElements(arr, n);
    int smallest = findSmallestElement(arr, n);
    int largest = findLargestElement(arr, n);

    displayResults(arr, n, sum, smallest, largest);

    delete[] arr; 

    return 0;
}
