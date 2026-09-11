#include <iostream>
using namespace std;
int main()
{
    float num1, num2, num3, num4, num5, num6, num7;
    float sum;

    cout << "Enter marks for courses:\n";
    cout << "Course 1: ";
    cin >> num1;
    cout << "Course 2: ";
    cin >> num2;
    cout << "Course 3: ";
    cin >> num3;
    cout << "Course 4: ";
    cin >> num4;
    cout << "Course 5: ";
    cin >> num5;
    cout << "Course 6: ";
    cin >> num6;
    cout << "Course 7: ";
    cin >> num7;

    sum = num1 + num2 + num3 + num4 + num5 + num6 + num7;
    cout << "Total Sum of marks of the courses are = " << sum << endl;
    return 0;
}