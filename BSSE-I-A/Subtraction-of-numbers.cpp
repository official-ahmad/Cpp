#include <iostream>
using namespace std;
int main()
{

    float num1, num2;
    float ans;

    cout << "Enter Number to be subtracted: \n";

    cout << "Enter Greater Number 1: ";
    cin >> num1;

    cout << "Enter smaller Number 2: ";
    cin >> num2;

    if (num1 < num2)
    {
        cout << "Error: cannot Subtract smaller number by greater number." << endl;
        return 1;
    }
    else
    {
        ans = num1 - num2;
    }

    cout << "The Output of numbers are: " << ans << endl;
    return 0;
}