//3. Count Even and OddNumbers
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int *a = new int[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> a[i];

    int even = 0, odd = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            even++;
        }
        else if(a[i] % 2 == 1){
            odd++;
        }
    }
    cout << "Total Even Integers: " << even << endl;
    cout << "Total Odd Integers: " << odd << endl;

    delete[] a;
    a = nullptr;
    return 0;
}
