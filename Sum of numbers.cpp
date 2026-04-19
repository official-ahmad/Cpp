#include <iostream>
using namespace std;

int main()

{
    int a, b, sum;

    cout << "Enter first Number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    sum = a / b;

    if (a == 0)
    {
        cout << "Invlid operation";
    }

    if (b == 0)
    {
        cout << "Math error";
    }
    

    else
    {
        cout << "The sum of numbers is: " << sum << endl;
    }
    return 0;
}