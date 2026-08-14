//4. Dynamic Array– Search an Element
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int *a = new int[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> a[i];

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++){
        if(a[i] == key){
            cout << "Element found at index " << i << endl;
            return 0;
        }
    }
    cout << "Element not found !";
    return 0;

}
