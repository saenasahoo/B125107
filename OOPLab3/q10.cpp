#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;

    // Allocate row pointers for first matrix
    int **A = new int*[m];

    // Allocate memory for each row
    for (int i = 0; i < m; i++) {
        A[i] = new int[n];
    }

    // Allocate row pointers for second matrix
    int **B = new int*[m];

    // Allocate memory for each row
    for (int i = 0; i < m; i++) {
        B[i] = new int[n];
    }

    // Allocate row pointers for result matrix
    int **C = new int*[m];

    // Allocate memory for each row
    for (int i = 0; i < m; i++) {
        C[i] = new int[n];
    }

    // Input first matrix
    cout << "Enter elements of first matrix:" << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:" << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix addition
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    cout << "Resultant Matrix:" << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Delete each row
    for (int i = 0; i < m; i++) {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }

    // Delete row pointer arrays
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}