#include <iostream>

using namespace std;

class WaterBill
{public:
    
    int consumerNumber;
    string consumerName;
    int waterConsumption;
    float bill;
//enter consumer details

    void input()
    {  cout << "Enter Consumer Name: "<<endl;
       cin>>consumerName;
        cout << "Enter Consumer Number: "<<endl;
        cin >> consumerNumber;
       
        cout << "Enter Water Consumption (litres): "<<endl;
        cin >> waterConsumption;
    }

    void calculateBill()
    {
        if (waterConsumption <= 500)
        {
            bill = waterConsumption * 2;
        }
        else if (waterConsumption <= 1000)
        {
            bill = (500 * 2) + ((waterConsumption - 500) * 3);
        }
        else
        {
            bill = (500 * 2) + (500 * 3) + ((waterConsumption - 1000) * 5);
        }
    }
//display complete bill
    void display()
    {
        cout << "Water Bill"<<endl;
        cout << "Consumer Number : " << consumerNumber << endl;
        cout << "Consumer Name : " << consumerName << endl;
        cout << "Water Consumption : " << waterConsumption << " litres" << endl;
        cout << "Total Bill : Rs. " << bill << endl;
    }
};

int main()
{
    WaterBill w;//object

    w.input();
    w.calculateBill();
    w.display();

    return 0;
}