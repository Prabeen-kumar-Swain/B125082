
#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];

public:
    void input() {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> a[i][j];
    }

    Matrix operator+(Matrix m) {
        Matrix temp;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                temp.a[i][j] = a[i][j] + m.a[i][j];
        return temp;
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix m1, m2, m3;

    cout << "Enter first matrix (4 elements):\n";
    m1.input();

    cout << "Enter second matrix (4 elements):\n";
    m2.input();

    m3 = m1 + m2;

    cout << "First matrix:\n";
    m1.display();

    cout << "Second matrix:\n";
    m2.display();

    cout << "Sum matrix:\n";
    m3.display();

    return 0;
}