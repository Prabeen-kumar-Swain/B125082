//10. Dynamic Matrix Operations
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    int **a = new int*[m];
    int **b = new int*[m];
    int **sum = new int*[m];

    for(int i = 0; i < m; i++)
        a[i] = new int[n];

    cout << "Enter matrix1:\n";
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Matrix 1:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    for(int i = 0; i < m; i++)
        b[i] = new int[n];

    cout << "Enter matrix2:\n";
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> b[i][j];

    cout << "Matrix 2:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++)
            cout << b[i][j] << " ";
        cout << '\n';
    }

    cout << "\n\nSum Matrix :\n";
    for(int i = 0; i < m; i++) {
        cout << "            ";
        for(int j = 0; j < n; j++)
            cout << a[i][j]+b[i][j] << " ";
        cout << '\n';
    }

    for(int i = 0; i < m; i++){
        delete[] a[i];
        a[i] = nullptr;
        delete[] b[i];
        b[i] = nullptr;
        delete[] sum[i];
        sum[i] = nullptr;
    }

    delete[] a;
    delete[] b;
    delete[] sum;

    a = nullptr;
    b = nullptr;
    sum = nullptr;
}
