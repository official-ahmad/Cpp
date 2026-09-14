#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    float ans;

    cout << "Enter Number to be divided: \n";

    cout << "Enter Number 1: ";
    cin >> num1;

    cout << "Enter Number 2: ";
    cin >> num2;

    if (num2 == 0)
    {
        cout << "Error: Cannot Divide by Zero." << endl;
        return 1;
    }
    else
    {

        ans = num1 / num2;
    }

    cout << "The Output of numbers are: " << ans << endl;
    return 0;
}