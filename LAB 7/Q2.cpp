//MULTI-LEVEL INHERITANCE
#include <iostream>
using namespace std;

class Image {
protected:
    int width, height;

public:
    Image(int w, int h) {
        width = w;
        height = h;
    }
};

class CompressedImage : public Image {
protected:
    float ratio;

public:
    CompressedImage(int w, int h, float r) : Image(w, h) {
        ratio = r;
    }
};

class EncryptedImage : public CompressedImage {
    string algorithm;

public:
    EncryptedImage(int w, int h, float r, string a)
        : CompressedImage(w, h, r) {
        algorithm = a;
    }

    void display() {
        int pixels = width * height;
        float effective = pixels * ratio / 100;

        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Original Pixels: " << pixels << endl;
        cout << "Compression Ratio: " << ratio << "%" << endl;
        cout << "Effective Size: " << effective << endl;
        cout << "Encryption: " << algorithm << endl;
    }
};

int main() {
    EncryptedImage img(1080, 860, 30, "HTRSD");
    img.display();

    return 0;
}
