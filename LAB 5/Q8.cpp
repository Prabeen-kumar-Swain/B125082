//Update Array Elements
#include <iostream>
using namespace std;

void update(int &x, int amount){
    x += amount;
}

void update(double &x, double amount){
    x += amount;
}

void update(int arr[], int n, int amount){
    for (int i = 0; i < n; i++)
        arr[i] += amount;
}

int main(){
    int x, amount, n;
    double y, damount;
    int arr[100];

    cout << "Enter integer value: ";
    cin >> x;

    cout << "Enter amount: ";
    cin >> amount;

    cout << "Before update: " << x << endl;
    update(x, amount);
    cout << "After update: " << x << endl;

    cout << "\nEnter floating-point value: ";
    cin >> y;

    cout << "Enter amount: ";
    cin >> damount;

    cout << "Before update: " << y << endl;
    update(y, damount);
    cout << "After update: " << y << endl;

    cout << "\nEnter size of integer array: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter amount to add: ";
    cin >> amount;

    cout << "Before update: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    update(arr, n, amount);

    cout << "\nAfter update: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
