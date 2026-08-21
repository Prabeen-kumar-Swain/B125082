//3. Compare TwoDigital Cameras– Friend Function
#include <iostream>
using namespace std;

class Camera {
    string brand, model;
    int megapixels, storage;

public:
    void input() {
        cout << "Brand: ";
        cin >> brand;
        cout << "Model: ";
        cin >> model;
        cout << "Megapixels: ";
        cin >> megapixels;
        cout << "Storage (GB): ";
        cin >> storage;
    }

    friend void compareCamera(Camera a, Camera b);
};

void compareCamera(Camera a, Camera b) {
    Camera x = a;

    if (b.megapixels > a.megapixels ||
       (b.megapixels == a.megapixels && b.storage > a.storage))
        x = b;

    cout << "\nBetter Camera:";
    cout << "\nBrand: " << x.brand;
    cout << "\nModel: " << x.model;
    cout << "\nMegapixels: " << x.megapixels;
    cout << "\nStorage: " << x.storage << " GB";
}

int main() {
    Camera a, b;

    cout << "First Camera\n";
    a.input();

    cout << "\nSecond Camera\n";
    b.input();

    compareCamera(a, b);
}
