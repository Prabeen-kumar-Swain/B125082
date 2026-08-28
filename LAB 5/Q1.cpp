//Distance Converter
#include <iostream>
using namespace std;

int convert(int km){
    return km * 1000;
}

int convert(int meters, char){
    return meters * 100;
}

double convert(double km){
    return km * 1000;
}

int main(){
    int km, meters;
    double fkm;

    cout << "Enter distance in kilometers (integer): ";
    cin >> km;
    cout << "Enter distance in meters (integer): ";
    cin >> meters;
    cout << "Enter distance in kilometers (floating-point): ";
    cin >> fkm;

    cout << "\n          Conversion:";
    cout << "\nInteger km to meters = " << convert(km) << " m";
    cout << "\nMeters to centimeters = " << convert(meters, 'a') << " cm";
    cout << "\nFloating-point km to meters = " << convert(fkm) << " m";

    return 0;
}
