#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    float a, b, c;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    float s = (b * b) - (4 * a * c);

    float x1 = (-b + sqrt(s)) / (2 * a);

    cout << "The result of the formula is: " << x1 << endl;
    return 0;
}