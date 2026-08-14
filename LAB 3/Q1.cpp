//1. Dynamic NumberOperations
#include <iostream>
using namespace std;

int main() {
    int *p = new int;
    int *q = new int;

    cout << "Enter integer 1: ";
    cin >> *p;
    cout << "Enter integer 2: ";
    cin >> *q;

    cout << "Sum: " << *p + *q << endl;
    cout << "Difference: " << *p - *q << endl;
    cout << "Product: " << (*p)*(*q) << endl;
    cout << "Quotient: " << (*p)/(*q) << endl;

    delete p;
    delete q;
    p = nullptr;
    q = nullptr;
    return 0;
}
