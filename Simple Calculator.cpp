#include <iostream>
using namespace std;
int main()

{
    float num1, num2;
    char result;

    cout << "Choose operator (+, -, *, /): ";
    cin >> result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter Second number: ";
    cin >> num2;

    // cout << "Sum = " << num1 + num2 << endl;
    // cout << "Difference = " << num1 - num2 << endl;
    // cout << "Multiplication = " << num1 * num2 << endl;
    // cout << "Division = " << num1 / num2 << endl;

    if (result == '+')
    {
        cout << "The sum is: " << num1 + num2 << endl;
    }

    else if (result == '-')
    {
        cout << "The Differernce is: " << num1 - num2 << endl;
    }

    else if (result == '*')
    {
        cout << "The Product is: " << num1 * num2 << endl;
    }

    else if (result == '/')
    {
        cout << "The Division is: " << num1 / num2 << endl;
    }

    else
    {
        cout << "Invalid Opeation!";
    }

    return 0;
}