
#include <iostream>
using namespace std;

class Fraction {
    int num, den;

public:
    void simplify() {
        if (den < 0) {
            num = -num;
            den = -den;
        }
        int a = abs(num), b = abs(den);
        while (b != 0) {      // GCD
            int r = a % b;
            a = b;
            b = r;
        }
        if (a != 0) {
            num /= a;
            den /= a;
        }
    }

    Fraction(int n = 0, int d = 1) {
        num = n;
        den = d;
        simplify();
    }

    Fraction operator+(Fraction f) {
        return Fraction(num * f.den + f.num * den, den * f.den);
    }

    Fraction operator-(Fraction f) {
        return Fraction(num * f.den - f.num * den, den * f.den);
    }

    void display() {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1(1, 5), f2(4, 6);
    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;

    cout << "First fraction: ";
    f1.display();
    cout << "Second fraction: ";
    f2.display();
    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();

    return 0;
}
