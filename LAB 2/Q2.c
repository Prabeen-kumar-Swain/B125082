//2. Square Calculator
#include <iostream>

using namespace std;

class Square {
public:
    double side; 

    void takeInputSide() {
        cout << "\n===============================";
        cout << "\n    Square Calculator";
        cout << "\n===============================\n";
        cout << "Enter the length of the side of the square: "; 
        cin >> side;
    }

    double calculateArea() {
        return side * side;
    }
    double calculatePerimeter() {
        return 4 * side;
    }

    void displayResults() {
        double area = calculateArea();
        double perimeter = calculatePerimeter();

         cout << "\n\n===============================\n";
         cout << "              RESULTS\n";
         cout << "-------------------------------\n";
         cout << "Side Length Entered:     " << side <<  endl;
         cout << "Area of the Square (A):  " << area <<  endl;
         cout << "Perimeter of the Square (P): " << perimeter <<  endl;
         cout << "===============================\n";
    }
};

int main() {
    Square mySquare;

    mySquare.takeInputSide();

    mySquare.displayResults();

    return 0;
}
