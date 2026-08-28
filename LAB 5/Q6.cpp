// String Information
#include <iostream>
#include <cstring> // for strlen function
using namespace std;

int information(char str[]){
    return strlen(str);
}

int information(char str[], char ch){
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == ch)
            count++;
    }

    return count;
}

int information(char str[], char ch, int k){
    int count = 0;

    for (int i = 0; str[i] != '\0' && i < k; i++){
        if (str[i] == ch)
            count++;
    }

    return count;
}

int main(){
    char str[100], ch;
    int k;

    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter character to count: ";
    cin >> ch;
    cout << "Enter k: ";
    cin >> k;

    cout << "\nLength of string = " << information(str);
    cout << "\nTotal occurrence of '" << ch << "' = " << information(str, ch);
    cout << "\nOccurrence in first " << k << " positions = " << information(str, ch, k);

    return 0;
}
