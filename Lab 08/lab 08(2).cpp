#include <iostream>
using namespace std;

int main()
{
    int choice;
    float usd, newAmount;

    cout << "Currency Converter\n";
    cout << "1. USD to PKR\n";
    cout << "2. USD to Pound\n";
    cout << "3. USD to Euro\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter amount in USD: ";
    cin >> usd;

    switch (choice)
    {
        case 1:
            newAmount = usd * 280;   
            cout << "Amount in PKR: " << newAmount;
            break;
        case 2:
            newAmount = usd * 0.79;
            cout << "Amount in Pound: " << newAmount;
            break;
        case 3:
            newAmount = usd * 0.92;  
            cout << "Amount in Euro: " << newAmount;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
