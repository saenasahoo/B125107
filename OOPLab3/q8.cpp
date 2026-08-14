#include <iostream>
using namespace std;

// Function to accept elements
void accept(int *arr, int n) {
    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Function to calculate sum
int calculateSum(int *arr, int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}

// Function to find smallest element
int findSmallest(int *arr, int n) {
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}

// Function to find largest element
int findLargest(int *arr, int n) {
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

// Function to display results
void display(int sum, int smallest, int largest) {
    cout << "Sum = " << sum << endl;
    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    // Dynamically allocate array
    int *arr = new int[n];

    accept(arr, n);

    int sum = calculateSum(arr, n);
    int smallest = findSmallest(arr, n);
    int largest = findLargest(arr, n);

    display(sum, smallest, largest);

    // Release memory
    delete[] arr;

    return 0;
}