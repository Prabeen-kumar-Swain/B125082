
#include <iostream>
using namespace std;

class Score {
    int score;

public:
    Score(int s) {
        score = s;
    }

    Score operator++() {
        ++score;
        return *this;
    }

    Score operator++(int) {
        Score temp = *this;
        score++;
        return temp;
    }

    void display() {
        cout << score << endl;
    }
};

int main() {
    Score s1(10), s2(10);

    Score a = ++s1;
    Score b = s2++;

    cout << "Prefix result: ";
    a.display();
    cout << "Prefix object: ";
    s1.display();

    cout << "Postfix result: ";
    b.display();
    cout << "Postfix object: ";
    s2.display();

    return 0;
}