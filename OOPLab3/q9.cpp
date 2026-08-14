#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    float salary;

public:
    // Accept employee details
    void input() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Display employee details
    void display() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Salary: " << salary << endl;
    }

    // Return salary
    float getSalary() {
        return salary;
    }
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    // Dynamically allocate array of Employee objects
    Employee *emp = new Employee[n];

    // Accept employee details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << ":" << endl;
        emp[i].input();
    }

    // Display all employee details
    cout << "\n Employee Details " << endl;

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":" << endl;
        emp[i].display();
    }

    // Find employee with highest salary
    int highestIndex = 0;

    for (int i = 1; i < n; i++) {
        if (emp[i].getSalary() > emp[highestIndex].getSalary()) {
            highestIndex = i;
        }
    }

    cout << "\n- Employee with Highest Salary " << endl;
    emp[highestIndex].display();

    // Calculate average salary
    float totalSalary = 0;

    for (int i = 0; i < n; i++) {
        totalSalary += emp[i].getSalary();
    }

    float average = totalSalary / n;

    cout << "\nAverage Salary = " << average << endl;

    // Release memory
    delete[] emp;

    return 0;
}