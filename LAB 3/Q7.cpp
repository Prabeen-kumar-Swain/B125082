//7. Dynamic Character Array
#include <iostream>
#include <string>

using namespace std;

void countCharacters(const char* str, int& vowels, int& digits, int& spaces, int& consonants, int size) {
    for (int i = 0; i < size; i++) {
        switch (str[i]) {
            // Added cases for both lowercase and uppercase letters, digits, and spaces
            // Lowercase vowels
            case 'a': case 'e': case 'i': case 'o': case 'u':

            // Uppercase vowels
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowels++;
                break;

            // Lowercase consonants
            case 'b': case 'c': case 'd': case 'f': case 'g':
            case 'h': case 'j': case 'k': case 'l': case 'm':
            case 'n': case 'p': case 'q': case 'r': case 's':
            case 't': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            // Uppercase consonants
            case 'B': case 'C': case 'D': case 'F': case 'G':
            case 'H': case 'J': case 'K': case 'L': case 'M':
            case 'N': case 'P': case 'Q': case 'R': case 'S':
            case 'T': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':
                consonants++;
                break;

            // Digits
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                digits++;
                break;

            case ' ':
                spaces++;
                break;
        }
    }
}

int main() {
    int size;

    cout << "Enter the size of string to allocate memory: ";
    cin >> size;
    cin.ignore(); // Ignore the newline character left in the buffer

    char* userString = new char[size + 1];

    cout << "Enter a string: ";
    cin.getline(userString, size + 1);

    int vowelCount = 0;
    int digitCount = 0;
    int spaceCount = 0;
    int consonantCount = 0;

    countCharacters(userString, vowelCount, digitCount, spaceCount, consonantCount, size);

    cout << "Vowels: " << vowelCount << "\n";
    cout << "Digits: " << digitCount << "\n";
    cout << "Spaces: " << spaceCount << "\n";
    cout << "Consonants: " << consonantCount << "\n";

    delete[] userString;
    userString = nullptr;

    return 0;
}
