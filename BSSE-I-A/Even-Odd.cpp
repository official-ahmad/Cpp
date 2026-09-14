#include <iostream>
using namespace std;
int main()
{
    int number;

    cout << "Enter a Number: ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << number << " is an Even number." << endl;
    }

    else
    {
        cout << number << " is an Odd number." << endl;
    }
    return 0;
    // this code checks if a number is even or odd by using the modulus operator. If the remainder when the number is divided by 2 is 0, it is even; otherwise, it is odd.
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num1, num2;
//     cout << "Enter two numbers to check if they are even or odd: \n";

//     cout << "Enter Number 1: ";
//     cin >> num1;
//     cout << "Enter Number 2: ";
//     cin >> num2;

//     if (num1 % 2 == 0)
//     {
//         cout << num1 << " is even." << endl;
//     }
//     else
//     {
//         cout << num1 << " is odd." << endl;
//     }

//     if (num2 % 2 == 0)
//     {
//         cout << num2 << " is even." << endl;
//     }
//     else
//     {
//         cout << num2 << " is odd." << endl;
//     }
// }