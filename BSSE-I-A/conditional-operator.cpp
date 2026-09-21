#include <iostream>
using namespace std;
int main()
{
    float marks;
    cout << "Enter marks: ";

    cin >> marks;

    if (marks > 75 || marks < 80)
    {
        cout << "A+";
    }

    else if (marks > 70 || marks < 60)
    {
        cout << "B+";
    }
    else if (marks > 50 || marks < 40)
    {
        cout << "C";
    }
    else if (marks > 40)
    {
        cout << "F";
    }
    return 0;
}