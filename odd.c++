#include <iostream>
using namespace std;
int main()

{
    int a = 1, count = 0;
    while (a <= 100)
    {
        if (a % 2 != 0)
        {
            cout << a << endl;
            count++;
        }
        a++;
    }
    cout << "Total counts are = " << count << endl;
    return 0;
}