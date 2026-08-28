//Nearest Value
#include <iostream>
#include <cmath> // for abs and fabs functions
using namespace std;

int nearValue(int a, int b){
    if (abs(a) <= abs(b))
        return a;
    else
        return b;
}

double nearValue(double a, double b){
    if (fabs(a) <= fabs(b))
        return a;
    else
        return b;
}

int nearValue(int arr[], int n){
    int nearest = arr[0];

    for (int i = 1; i < n; i++){
        if (abs(arr[i]) < abs(nearest))
            nearest = arr[i];
    }

    return nearest;
}

int main(){
    int a, b, n;
    double x, y;
    int arr[100];
  
    cout << "Enter two integers: ";
    cin >> a >> b;
     cout << "Nearest integer to zero = " << nearValue(a, b) << endl;
    cout << "\nEnter two floating-point values: ";
    cin >> x >> y;
     cout << "Nearest floating-point value to zero = " << nearValue(x, y) << endl;

    cout << "\nEnter size of integer array: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    cout << "Array element nearest to zero = " << nearValue(arr, n);

    return 0;
}
