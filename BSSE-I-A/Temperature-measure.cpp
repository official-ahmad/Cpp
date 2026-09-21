#include <iostream>
using namespace std;
int main()
{
    float tempC, tempF;
    cout << "Enter Temperature in Celsius: ";
    cin >> tempC;
    cout << "Enter Temperature in Fahrenheit: ";
    cin >> tempF;

    tempF = (tempC * 9 / 5) + 32;
    tempF = (tempF * 5 / 9) - 32;

    cout << "Temperature in Fahrenheit: " << tempF << endl;
    cout << "Temperature in Celsius: " << tempC << endl;
    return 0;
}