// Write a program that inpits three integers from the keyboard and prints the sum, average, product, smallest and largest of these numbers.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, sum, mean, product;

    cout << "Enter intergers: ";
    cin >> a >> b >> c;

    sum = a + b + c;
    cout << "Sum is: " << sum << endl;

    product = a * b * c;
    cout << "Product is: " << product << endl;

    mean = sum / 3;
    cout << "Arthmetic mean is: " << mean << endl;

    if (a > b && a > c)
    {
        cout << a << " is the largest" << endl;
    }

    else if (b > a && b > c)
    {
        cout << b << " is the largest" << endl;
    }

    else if (c > a && c > b)
    {
        cout << c << " is the largest" << endl;
    }

    if (a < b && a < c)
    {
        cout << a << " is the smallest" << endl;
    }

    else if (b < a && b < c)
    {
        cout << b << " is the smallest" << endl;
    }

    else if (c < a && c < b)
    {
        cout << c << " is the smallest" << endl;
    }

    return 0;
}

// Programmed by: Muhammad Ahmad - 2601616