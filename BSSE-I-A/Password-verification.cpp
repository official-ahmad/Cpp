#include <iostream>
using namespace std;
int main()
{

    int secretCode = 1234;
    cout << "Enter your password: ";
    cin >> secretCode;

    if (secretCode == 1234)
    {
        cout << "Access granted. Welcome!" << endl;
    }
    else
    {
        cout << "Access denied. Incorrect password." << endl;
    }

    return 0;
}