#include <iostream>
using namespace std;
int main()
{
    float num1, num2, num3, num4, num5, num6, num7;
    float sum;
    float avg;

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

    // avg = sum / 7;  to calculate average marks of the courses

    cout << "Total Sum of marks of the courses are = " << sum << endl;
    // cout << "Total Sum of marks of the courses are = " << avg << endl;
    return 0;
}

// #include <iostream>
// using namespace std;
// int main(){

//     float course1, course2, course3,course4;
//     float sum;

//     cout << "Enter Marks of Courses: \n";

//     cout << "Enter marks of Course1: ";
//     cin >> course1;

//     cout << "Enter marks of Course2: ";
//     cin >> course2;

//     cout << "Enter marks of Course3: ";
//     cin >> course3;

//     cout << "Enter marks of Course4: ";
//     cin >> course4;

//     sum = course1 + course2 + course3;

//     cout << "The total sum of numbers are: " << sum << endl;
//     return 0;

// }
