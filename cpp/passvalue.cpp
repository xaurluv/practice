#include <iostream>
using namespace std;

int main()
{
    int num, digit, rev = 0;

    cout << "Enter a number: ";
    cin >> num;

    int original = num;

    while (num != 0)
    {
        digit = num % 10;          // extract last digit
        rev = rev * 10 + digit;    // append digit to reversed number
        num = num / 10;            // remove last digit
    }

    cout << "Original number = " << original << endl;
    cout << "Reversed number = " << rev << endl;

    return 0;
}
