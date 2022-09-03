#include <iostream>
using namespace std;

int main()
{
    int n, i = 2, temp = 0;
    cin >> n;
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            temp += 1;
        }
        i += 1;
    }
    if (temp > 0)
    {
        cout << "Number is  not Prime !!" << endl;
    }
    else
    {
        cout << "Number is Prime !!" << endl;
    }
    return 0;
}