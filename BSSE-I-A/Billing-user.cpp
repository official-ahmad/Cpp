#include <iostream>
using namespace std;

int main()
{
    float price, quantity, total, discount, finalPrice;

    cout << "Enter Price of the item: ";
    cin >> price;

    cout << "Enter Quantity of the item: ";
    cin >> quantity;

    total = price * quantity;

    if (total > 5000)
    {
        discount = total * 0.10; 
    }
    else
    {
        discount = 0;
    }

    finalPrice = total - discount;

    cout << "Original Total: " << total << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Payable Amount: " << finalPrice << endl;

    return 0;
}