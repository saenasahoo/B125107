#include <iostream>
#include <cctype>
using namespace std;

// Check integer
void check(int n) {
    if (n > 0)
        cout << "Positive" << endl;
    else if (n < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;
}

// Check character
void check(char c) {
    if (isupper(c))
        cout << "Uppercase" << endl;
    else if (islower(c))
        cout << "Lowercase" << endl;
    else
        cout << "Not a letter" << endl;
}

// Search character in array
void check(char a[], int n) {
    char c;
    cout << "Enter character to search: ";
    cin >> c;

    for (int i = 0; i < n; i++) {
        if (a[i] == c) {
            cout << "Character found" << endl;
            return;
        }
    }

    cout << "Character not found" << endl;
}

int main() {
    int n, size;
    char c, a[100];

    cout << "Enter integer: ";
    cin >> n;
    check(n);

    cout << "Enter character: ";
    cin >> c;
    check(c);

    cout << "Enter array size: ";
    cin >> size;

    cout << "Enter characters: ";
    for (int i = 0; i < size; i++)
        cin >> a[i];

    check(a, size);

    return 0;
}