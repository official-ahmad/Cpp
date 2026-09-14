#include <iostream>
using namespace std;
int main()
{

    int speed, fine;
    cout << "Enter the speed of the vehicle (in km/h): ";
    cin >> speed;

    if (speed > 80)
    {
        fine = (speed - 80) * 5;
        cout << "You are over the speed limit! Your fine is: Rs. " << fine << endl;
    }
    else
    {
        cout << "You are within the speed limit. No fine." << endl;
    }

    return 0;
}


// OFFICIAL-AHMAD!