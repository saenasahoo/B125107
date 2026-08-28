#include <iostream>
using namespace std;

// Find length of character array
int information(char a[]) {
    int n = 0;

    while (a[n] != '\0')
        n++;

    return n;
}

// Count a character in array
int information(char a[], char c) {
    int count = 0;

    for (int i = 0; a[i] != '\0'; i++)
        if (a[i] == c)
            count++;

    return count;
}

// Count character in first k positions
int information(char a[], char c, int k) {
    int count = 0;

    for (int i = 0; i < k && a[i] != '\0'; i++)
        if (a[i] == c)
            count++;

    return count;
}

int main() {
    char a[100], c;
    int k;

    cout << "Enter string: ";
    cin >> a;

    cout << "Length = " << information(a) << endl;

    cout << "Enter character: ";
    cin >> c;

    cout << "Count = " << information(a, c) << endl;

    cout << "Enter k: ";
    cin >> k;

    cout << "First k count = " << information(a, c, k) << endl;

    return 0;
}