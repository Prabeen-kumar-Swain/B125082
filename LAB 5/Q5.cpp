//Swap Values
#include <iostream>
using namespace std;

void swapData(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swapData(double &a, double &b){
    double temp = a;
    a = b;
    b = temp;
}

void swapData(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    double x, y;
    int p, q;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Before swapping: " << a << " " << b << endl;
    swapData(a, b);
    cout << "After swapping: " << a << " " << b << endl;

    cout << "\nEnter two floating-point values: ";
    cin >> x >> y;
    cout << "Before swapping: " << x << " " << y << endl;
    swapData(x, y);
    cout << "After swapping: " << x << " " << y << endl;

    cout << "\nEnter two integers for pointer swapping: ";
    cin >> p >> q;
    cout << "Before swapping: " << p << " " << q << endl;
    swapData(&p, &q);
    cout << "After swapping: " << p << " " << q << endl;

    return 0;
}
