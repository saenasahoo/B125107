#include <iostream>
using namespace std;

class Drone
{
private:
    int droneID;
    float battery;
    float flightHours;

public:

    void setDetails(int id, float b, float h)
    {
        droneID = id;
        battery = b;
        flightHours = h;
    }

    // Overloaded update():updates only battery
    void update(float b)
    {
        battery = b;
    }

    // Overloaded update(): updates battery and flight hours
    void update(float b, float h)
    {
        battery = b;
        flightHours = h;
    }

    // Display drone details
    void display()
    {
        cout << "\nDrone ID: " << droneID;
        cout << "\nBattery: " << battery << "%";
        cout << "\nFlight Hours: " << flightHours << endl;
    }

    // Friend function
    friend void compareBattery(Drone d1, Drone d2);
};

// Friend function to compare batteries
void compareBattery(Drone d1, Drone d2)
{
    if (d1.battery > d2.battery)
    {
        cout << "\nDrone " << d1.droneID
             << " has higher battery.";
    }
    else if (d2.battery > d1.battery)
    {
        cout << "\nDrone " << d2.droneID
             << " has higher battery.";
    }
    else
    {
        cout << "\nBoth drones have the same battery.";
    }
}

int main()
{
    // Dynamically create two drones
    Drone *d1 = new Drone;
    Drone *d2 = new Drone;

    int id;
    float battery, hours;

    // Input first drone
    cout << "Enter Drone 1 ID: ";
    cin >> id;

    cout << "Enter battery percentage: ";
    cin >> battery;

    cout << "Enter flight hours: ";
    cin >> hours;

    d1->setDetails(id, battery, hours);

    // Input second drone
    cout << "\nEnter Drone 2 ID: ";
    cin >> id;

    cout << "Enter battery percentage: ";
    cin >> battery;

    cout << "Enter flight hours: ";
    cin >> hours;

    d2->setDetails(id, battery, hours);

    // Update only battery of Drone 1
    cout << "\nEnter new battery for Drone 1: ";
    cin >> battery;

    d1->update(battery);

    // Update battery and flight hours of Drone 2
    cout << "\nEnter new battery for Drone 2: ";
    cin >> battery;

    cout << "Enter new flight hours: ";
    cin >> hours;

    d2->update(battery, hours);

    // Display details
    cout << "\n--- Updated Drone Details ---";
    d1->display();
    d2->display();

    // Compare batteries
    compareBattery(*d1, *d2);

    // Release dynamically allocated memory
    delete d1;
    delete d2;

    return 0;
}