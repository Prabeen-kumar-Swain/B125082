//2. Dynamic Array– Reverse Order
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int *a = new int[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> a[i];

    cout << "Reversed Array: ";
    for(int i = n-1; i >= 0; i--) cout << a[i] << " ";

    delete[] a;
    a = nullptr;
    return 0;
}
