//3. Temperature Converter
#include <iostream>

using namespace std;

class Temperature {
public:
    double celsius;
    double fahrenheit;

    void acceptCelsius() {
        cout << "\n=============================";
        cout << "\n--- Temperature Converter ---";
        cout << "\n=============================\n";

        cout << "Enter current temperature in deg Celsius: ";
        cin >> celsius;
    }

    void convertToFahrenheit() {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    }

    void displayTemperatures(){
        cout << "\n\n=============================\n";
        cout << "            Results\n";
        cout << "=============================\n";
         cout << "Temperature in deg Celsius :  " << celsius <<  endl;
         cout << "Equivalent in deg Fahrenheit : " << fahrenheit <<  endl;
         cout << "=============================\n";
    }
};

int main() {
    Temperature tempConverter;

    tempConverter.acceptCelsius();
    tempConverter.convertToFahrenheit();
    tempConverter.displayTemperatures();

    return 0;
}
