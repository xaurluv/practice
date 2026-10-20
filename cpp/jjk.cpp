#include <iostream>
using namespace std;

int power(int a, int b = 2)
{
    int result = 1;

    for (int i = 1; i <= b; i++)
    {
        result = result * a;
    }

    return result;
}

int main()
{
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b (0 to omit): ";
    cin >> b;

    if (b == 0)
        cout << "Square of a = " << power(a);
    else
        cout << "Power = " << power(a, b);

    return 0;
}