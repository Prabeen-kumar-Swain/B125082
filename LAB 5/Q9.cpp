//Data Inspection Using Pointers
#include <iostream>
using namespace std;

void inspect(int x){
    cout << "Value of integer variable = " << x << endl;
}

void inspect(int *p){
    cout << "Value stored at pointer = " << *p << endl;
}

void inspect(int *p, int n){
    cout << "Array elements: ";

    for (int i = 0; i < n; i++)
        cout << *(p + i) << " ";

    cout << endl;
}

int main(){
    int x, n;
    int arr[100];

    cout << "Enter an integer: ";
    cin >> x;

    inspect(x);

    cout << "\nPointer inspection: ";
    inspect(&x);
    cout << "\nEnter size of array: ";
    cin >> n;
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    inspect(arr, n);

    return 0;
}
