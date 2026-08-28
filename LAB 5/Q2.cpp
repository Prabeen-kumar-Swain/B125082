//Area Calculator
#include <iostream>
using namespace std;

double area(double side){
    return side * side;
}

double area(double length, double breadth){
    return length * breadth;
}

double area(double radius, char){
    return 3.14159 * radius * radius;
}

int main(){
    double side, length, breadth, radius;

    cout << "Enter side of square: ";
    cin >> side;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "\nArea of square = " << area(side);
    cout << "\nArea of rectangle = " << area(length, breadth);
    cout << "\nArea of circle = " << area(radius, 'c');

    return 0;
}
